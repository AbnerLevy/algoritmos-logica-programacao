# 📦 Sistema de Cadastro de Produtos em C

Projeto desenvolvido em linguagem C com foco em praticar lógica de programação utilizando apenas conceitos básicos, manipulação de arrays e uso de funções.

## 🚀 Funcionalidades

* ✅ Cadastrar produtos (código, nome e preço)
* 📋 Listar produtos cadastrados
* 🔍 Buscar produto pelo código
* 🔄 Inverter a ordem dos produtos
* 📊 Ordenar produtos pelo código

## 🧠 Conceitos praticados

* Manipulação de arrays (`int`, `float`, `char`)
* Uso de funções e modularização para organização do código
* Estruturas de repetição (`for`)
* Estruturas condicionais (`if`, `switch`)
* Manipulação de strings com `strcpy`
* Passagem de parâmetros por referência

## ⚙️ Estrutura do projeto

Os dados dos produtos são armazenados em três arrays separados, sem o uso de `struct`:

* `codigo[]`
* `Produto[][]`
* `preco[]`

Essa abordagem foi utilizada propositalmente para reforçar o entendimento de como manter a relação entre dados em estruturas simples.

## 🖥️ Como executar

1. Compile o código:

```bash
gcc main.c -o programa
```

2. Execute:

```bash
./programa
```

## 📌 Limitações e Observações

* O sistema permite cadastrar o máximo de 10 produtos
* Dados não são persistidos (armazenamento apenas em memória)
* A ordenação é feita com base no código do produto.
* A inversão mantém a correspondência entre código, nome e preço.
* Estrutura baseada em arrays paralelos (sem uso de `struct`)

## 🎯 Objetivo

O objetivo deste projeto é consolidar a base da lógica de programação em C, focando no aprendizado da manipulação de dados e organização de código com recursos fundamentais da linguagem.

## 🚧 Possíveis melhorias

* Refatoração utilizando `struct`
* Persistência do armazenamento em arquivo
* Validação de entradas do usuário
* Interface mais amigável

---

💡 Projeto com foco educacional, priorizando clareza e entendimento dos fundamentos.

Feito por Abner Levy 🚀
