#include "pico/stdlib.h"

#define LED_PIN 11 // Pino GPIO para o LED

// Constantes de tempo em milissegundos
const int tempoPonto = 200;       // 0.2 segundos
const int tempoTraco = 800;       // 0.8 segundos
const int tempoGap = 125;         // 0.125 segundos entre símbolos
const int gapEntreLetras = 250;   // 0.25 segundos entre letras
const int intervaloCiclo = 3000;  // 3 segundos entre ciclos

// Padrão Morse para SOS
const char *mensagemSOS = "...---...";

// Função para piscar o LED
void piscar(int duracao) {
    gpio_put(LED_PIN, 1);  // Liga o LED
    sleep_ms(duracao);     // Aguarda o tempo especificado
    gpio_put(LED_PIN, 0);  // Desliga o LED
    sleep_ms(tempoGap);    // Pausa entre os símbolos
}

// Função para enviar o padrão SOS
void enviarSOS() {
    for (int i = 0; mensagemSOS[i] != '\0'; i++) {
        if (mensagemSOS[i] == '.') {
            piscar(tempoPonto); // Ponto
        } else if (mensagemSOS[i] == '-') {
            piscar(tempoTraco); // Traço
        }
        sleep_ms(gapEntreLetras); // Intervalo entre letras
    }
    sleep_ms(intervaloCiclo);    // Intervalo entre ciclos
}

// Função principal
int main() {
    // Inicializa o GPIO do LED
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    while (1) {
        enviarSOS(); // Envia o sinal SOS repetidamente
    }

    return 0;
}
