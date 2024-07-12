# Minishell 42rio

<p align="center">
  <img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=8F0D87&height=120&section=header"/>
</p>

## Sobre o Projeto

Este projeto faz parte do currículo da 42rio e consiste na implementação de um shell mínimo em C, chamado Minishell. O objetivo é recriar funcionalidades básicas do terminal UNIX, como execução de comandos, manipulação de variáveis de ambiente, redirecionamento de entrada e saída, entre outras.

## Funcionalidades Implementadas

- Execução de comandos internos (como `cd`, `echo`, `env`, `export`, `unset`).
- Manipulação de variáveis de ambiente.
- Redirecionamento de entrada (`<`) e saída (`>`).
- Pipes (`|`) para encadear a saída de um comando como entrada para outro.
- Expansão de variáveis de ambiente (`$`).

## Como Compilar e Executar

### Pré-requisitos

- GCC compiler
- Sistema operacional compatível com UNIX

### Compilação

```bash
make


