# Sistema de gestión de eventos y venta de entradas en C++

Aplicación de consola en **C++** que simula una plataforma de venta de entradas para conciertos. Distintos tipos de usuario (administradores, artistas, asistentes y asistentes VIP) inician sesión y, según su perfil, gestionan usuarios, crean eventos o compran entradas. Los datos se guardan en ficheros al terminar.

Proyecto de la asignatura **Informática Industrial I** del Grado en Ingeniería Electrónica Industrial y Automática (Universidad Carlos III de Madrid).

## Funcionalidades

- **Registro e inicio de sesión**, con un máximo de tres intentos.
- **Menú distinto según el tipo de usuario**:
  - **Administrador**: crear, modificar, eliminar y listar usuarios; ver eventos y localizaciones.
  - **Artista**: crear, modificar y eliminar sus propios eventos.
  - **Asistente**: ver eventos, comprar entradas y consultar las que tiene.
  - **Asistente VIP**: lo mismo que un asistente, con acceso además a eventos exclusivos.
- **Compra de entradas** con comprobación de saldo en la cartera del asistente y de acceso a eventos VIP.
- **Persistencia en ficheros**: usuarios, eventos y localizaciones se guardan en `usuarios.txt`, `eventos.txt` y `localizaciones.txt`.

Ejemplo de inicio de sesión:

```
===== PAGINA DE INICIO =====
1. Registrarse
2. Iniciar sesión
3. Salir del programa
Seleccione una opcion: 2
Nombre de usuario: admin1
Contraseña: adminpass1
Inicio de sesion completado, admin1
===== MENU DE ADMINISTRADORES =====
1. Crear usuario
2. Modificar usuario
...
```

## Diseño

<img width="1879" height="1777" alt="image" src="https://github.com/user-attachments/assets/0599e6b6-344d-4f88-b235-565d3f8889c3" />

- **Herencia y polimorfismo**: `Usuario` es una clase **abstracta** con métodos virtuales puros (`display()`, `guardarEnFichero()`). De ella heredan `Administrador`, `Artista` y `Asistente`, y de esta última `AsistenteVIP`. Todos los usuarios se guardan en un único `vector<Usuario*>`, y cada uno ejecuta su propia versión de los métodos.
- **`dynamic_cast`** para identificar el tipo concreto de cada usuario y mostrarle su menú.
- **Clase `Interfaz`**: centraliza la gestión de usuarios, eventos y localizaciones, de modo que el `main` queda limpio. Su destructor libera toda la **memoria dinámica** reservada con `new`.
- **Contenedores de la STL** (`vector`) para las listas de usuarios, eventos, localizaciones y entradas.
- **Sobrecarga de operadores** `<<` y `>>` para leer y mostrar objetos directamente con flujos.
- **Clase `Menu`** que agrupa todos los menús de texto.

Clases principales: `Usuario`, `Administrador`, `Artista`, `Asistente`, `AsistenteVIP`, `Evento`, `Entrada`, `Localizacion`, `Interfaz` y `Menu`.

## Cómo compilarlo

Con `g++` desde la carpeta del proyecto:

```bash
g++ *.cpp -o gestion_entradas
./gestion_entradas
```

## Posibles mejoras

- Guardar las contraseñas cifradas (*hash*) en lugar de en texto plano.
- Cargar los datos desde los ficheros al iniciar el programa, no solo guardarlos al salir.
- Sustituir los punteros crudos por punteros inteligentes (`std::unique_ptr`).

## Autores

- Rafael Torres Olmedo
- Miguel Lansac Hernanz
