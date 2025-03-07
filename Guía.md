# SDV-UN
## Instalación de dependencias para la migración a ROS 2 Jazzy

En este proyecto, algunas dependencias no están incluidas en la instalación base de ROS 2 Jazzy y deben instalarse manualmente. A continuación, se presentan los pasos para instalarlas:

### 1. Requisitos previos

Antes de continuar con la instalación de dependencias, asegúrate de contar con:
- Un disco o partición con **Ubuntu 24** y **ROS 2 Jazzy** instalados.
- Al menos **40 GB de espacio libre** para acomodar Ubuntu, ROS 2 Jazzy y las librerías necesarias.

### 2. Instalación de paquetes mediante `apt`

Ejecuta el siguiente comando para instalar las librerías necesarias:

```sh
sudo apt update && sudo apt install -y \
    ros-jazzy-nav2-map-server \
    ros-jazzy-nav2-bringup \
    ros-jazzy-nav2-amcl \
    ros-jazzy-rosbridge-server \
    ros-jazzy-robot-localization \
    ros-jazzy-slam-toolbox \
    ros-jazzy-imu-complementary-filter \
    ros-jazzy-serial-driver \
    ros-jazzy-nav2-planner \
    ros-jazzy-rtabmap-ros \
    ros-jazzy-imu-tools \
    ros-jazzy-nav2-regulated-pure-pursuit-controller
```

### 3. Instalación de `sick_scan_xd`

Para instalar el paquete `sick_scan_xd`, sigue estos pasos:

```sh
sudo apt update && sudo apt install -y sick_scan_xd
```

Si necesitas una versión específica o personalizada, también puedes clonarlo desde su repositorio y compilarlo manualmente en tu espacio de trabajo ROS 2.

### 4. Configuración del workspace

Después de instalar las dependencias, sigue estos pasos:

1. **Descargar la carpeta `src`** del repositorio.
2. **Colocar la carpeta `src` en tu workspace de ROS 2**, asegurándote de que la estructura de archivos sea correcta.
3. **Verificar el archivo de parámetros YAML** en `sdv_nav/`, asegurándote de que corresponda al SDV que estás utilizando.
4. **Revisar el archivo de configuración de red**, si es necesario, para asegurar compatibilidad con la infraestructura de red utilizada.
5. **Compilar el workspace** con el siguiente comando:

```sh
colcon build
```

### 5. Ejecución del entorno del SDV

Para lanzar el entorno del SDV, utiliza el siguiente comando:

```sh
ros2 launch sdv_process process_launch.py
```

El archivo de ejecución del sistema se encuentra en uno de los scripts dentro de la carpeta `sdv_scripts`, por lo que debes verificar que el script correspondiente esté correctamente configurado antes de ejecutar el sistema.

### 6. Verificación de instalación

Para verificar que los paquetes se instalaron correctamente, usa el siguiente comando:

```sh
ros2 pkg list | grep -E "(nav2|slam|sick|imu|robot|rosbridge)"
```

Si algún paquete falta, intenta reinstalarlo o verifica que el repositorio de ROS 2 está correctamente configurado en tu sistema.

---

# SDV-UN
