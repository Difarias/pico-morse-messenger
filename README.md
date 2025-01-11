# Projeto Código Morse com Placa BitDogLab

Este projeto tem como objetivo a implementação de um sistema de envio de sinais de código Morse utilizando a placa BitDogLab. O código foi desenvolvido e testado em ambientes simulados, com validação final no hardware real da placa.

## Objetivo

O objetivo principal é criar uma simulação de código Morse para transmitir a mensagem "SOS" utilizando um LED conectado ao pino GPIO da Raspberry Pi Pico, que é a base da placa BitDogLab. O projeto foi desenvolvido utilizando o ambiente Wokwi Web, integrado ao Visual Studio Code, e posteriormente transferido para a placa física para testes finais.

## Tecnologias Utilizadas

- **Raspberry Pi Pico** (ou placa BitDogLab baseada nela)
- **Wokwi Web** (simulação do circuito)
- **Visual Studio Code** (com a extensão Wokwi Simulator)
- **Código Morse** (para transmitir a mensagem SOS)
- **Plataforma de Simulação** (Wokwi)

## Etapas do Desenvolvimento

1. **Desenvolvimento no Wokwi Web**:
    - Inicialmente, o código foi testado na plataforma Wokwi Web, onde o comportamento do LED foi simulado para validar a lógica de controle do código Morse.

2. **Integração com Visual Studio Code**:
    - O código foi transferido para o ambiente integrado do Visual Studio Code, usando a extensão Wokwi Simulator. O processo incluiu a configuração dos arquivos necessários como `CMakeLists.txt` e `settings.toml`.

3. **Testes no Hardware Real**:
    - Após a validação no ambiente de simulação, o código foi transferido para a placa BitDogLab, utilizando o arquivo `.uf2` gerado, e o comportamento do LED foi testado no hardware real.

## Como Executar o Projeto

1. **Instalar as Ferramentas**:
    - Instalar o [Visual Studio Code](https://code.visualstudio.com/).
    - Instalar a extensão [Wokwi Simulator](https://marketplace.visualstudio.com/items?itemName=wokwi.wokwi-simulator).

2. **Simulação no Wokwi**:
    - Faça o upload do arquivo `diagram.json` gerado pela plataforma Wokwi Web.
    - Inicie a simulação clicando no arquivo `.json` no VSCode.

3. **Transferência para a Placa BitDogLab**:
    - Compile o código e gere o arquivo `.uf2`.
    - Coloque a placa BitDogLab em modo de boot pressionando o botão `BOOTSEL`.
    - Transfira o arquivo `.uf2` para a placa.

