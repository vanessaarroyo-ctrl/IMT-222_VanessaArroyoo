# Secuencia de LEDs con Arduino

Este programa enciende una tira de "15 LEDs" de forma secuencial, con un intervalo de "0.5 segundos" entre cada uno.  
Al finalizar la secuencia, todos los LEDs se apagan y el ciclo vuelve a comenzar.

## Cambios realizados
- Se eliminaron los números mágicos del código.
- Ahora la cantidad de LEDs (`NUM_LEDS`), el primer pin (`START_PIN`) y el intervalo de tiempo (`DELAY_TIME_MS`) están definidos como constantes.
- Esto permite modificar la configuración fácilmente sin alterar la lógica principal.

## Uso
1. Conecta 15 LEDs a pines digitales consecutivos del Arduino, empezando desde el pin definido en `START_PIN`.
2. Carga el programa en la placa.
3. Observa la secuencia de encendido y apagado.
