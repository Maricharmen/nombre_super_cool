## 📂 Convención de Nombres para Archivos `.cpp`

Los archivos siguen la siguiente estructura:

Numero/Letra_NombreDelProblema_Version#.cpp

### 🔹 Ejemplo:

Z_IsabelDivision_V1.cpp

### 📌 Estructura:

- **Numero/Letra** → Identificador del problema (según el contest).
- **NombreDelProblema** → Nombre del problema (sin espacios).
- **Version#** → Número de versión de la solución (útil si se realiza por distintos autores).

---

## 📄 Duplicar un Archivo 

Si se requiere crear una nueva versión de un archivo `.cpp`, se puede copiar y renombrar desde la terminal usando:

```bash
cp ruta/origen/archivo.cpp ruta_destino/nuevo_nombre.cpp 
```

### 🔹 Ejemplo:

```bash
cp nombre_super_cool/plantilla.cpp GPMX_Easy_Mega_Mashup/ZA_HogFencing.cpp
```

---

## 🏁 Convención para Problemas de Contest

El estado de cada problema se indica utilizando los siguientes símbolos:

- ⭐ → Resuelto durante el contest.
- ✅ → Resuelto posteriormente.
- ⛔ → Pendiente por resolver.

## 🌿 Trabajar en una Rama

El flujo recomendado para trabajar con ramas es el siguiente:

### 1. Crear una nueva rama y cambiarse a ella

```bash
git switch -c nombre-de-la-rama
```

### 2. Realizar cambios y guardarlos

```bash
git add .
git commit -m "Descripción clara de los cambios"
```

### 3. Subir la rama al repositorio remoto (primera vez)

```bash
git push -u origin nombre-de-la-rama
```

Después de la primera vez, solo será necesario:

```bash
git push
```

---

## 🔄 Integrar una Rama en `main`

Cuando la solución esté lista y verificada:

### 1. Cambiar a la rama principal

```bash
git checkout main
```

### 2. Actualizar `main`

```bash
git pull origin main
```

### 3. Integrar la rama de trabajo

```bash
git merge nombre-de-la-rama
```

### 4. Subir los cambios a GitHub

```bash
git push origin main
```

---

## 🛠 Comandos Básicos de Git

### Ver la rama actual

```bash
git branch
```

### Cambiar de rama

```bash
git checkout nombre-de-la-rama
```

### Crear una nueva rama

```bash
git switch -c nombre-de-la-rama
```

### Guardar cambios

```bash
git add .
git commit -m "Mensaje del commit"
```

### Subir cambios

```bash
git push
```

### Subir una rama por primera vez

```bash
git push -u origin nombre-de-la-rama
```

### Actualizar una rama

```bash
git pull origin nombre-de-la-rama
```

### Integrar una rama en la rama actual

```bash
git merge nombre-de-la-rama
```



