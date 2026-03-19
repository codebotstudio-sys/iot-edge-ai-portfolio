### Descripcion 
Este plan está diseñado para formar un perfil de **Ingeniero de IoT Industrial / Edge AI Engineer**, enfocado en la interconexión de sistemas heredados (PLC) con tecnologías modernas (Cloud/IA).

### 🛠️ Tecnologías
- Framework: Arduino / ESP-IDF
- Herramienta: PlatformIO + VS Code
- Microcontrolador: ESP32

### 📌 Tickets del Sprint 1
- [X] TICKET-101: Estructura inicial del repo.
- [X] TICKET-102: Setup de entorno.


# 🤖 Proyecto: 01_HelloWorld - ESP32

 El objetivo es validar la cadena de herramientas (Toolchain) desde el código en VS Code hasta el hardware real.

## 📋 Descripción del Ticket
- **TICKET-103**: Implementación de señal de vida (Blink) y reporte de estado por puerto Serial.
- **TICKET-104**: Sincronización de flujo de trabajo con Git y GitHub.

## 🛠️ Especificaciones Técnicas
- **Placa:** ESP32 DevKit V1
- **Framework:** Arduino (C++)
- **Entorno:** PlatformIO + VS Code
- **Baudrate:** 115200

## 🔌 Conexiones
| Componente    | Pin ESP32 | Función |
|     ----      |----       |---------
| LED Integrado |  GPIO 2   | Indicador de estado |

## 🚀 Cómo ejecutar
1. Clonar el repositorio.
2. Abrir con VS Code + PlatformIO.
3. Conectar el ESP32.
4. Presionar `Build` (✔) y luego `Upload` (→).
5. Abrir el `Serial Monitor` para ver el log de estados.