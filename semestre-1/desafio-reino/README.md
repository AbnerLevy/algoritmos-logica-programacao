# ⚔️ Projeto: Reinos em C - O Desafio do Reino Perdido

Este é um jogo interativo de RPG de texto desenvolvido em **linguagem C** como parte de um desafio acadêmico para a cadeira de Lógica de Programação. O projeto aplica conceitos fundamentais de desenvolvimento, como estruturas de repetição, condicionais, menus interativos e manipulação de variáveis.

## 📜 O Enredo e Objetivo
Você é um aventureiro explorando o perigoso reino medieval de *Swithland*. Seu objetivo é sobreviver aos perigos enfrentados, gerenciar seus recursos (Vida, Ouro, Tochas e Armadura) e explorar locais misteriosos. 

O jogo possui três grandes áreas exploráveis:
1. **Masmorra:** Onde você pode encontrar baús de ouro, armaduras protetoras ou ser atacado por esqueletos.
2. **Templo Sagrado:** Um local de paz onde um monge pode curar suas feridas ou você pode encontrar relíquias antigas.
3. **Caverna Escura:** Uma área de alto risco que exige o gerenciamento de **tochas**. Explorar sem luz consome muito mais pontos de vida!

## 🛠️ Recursos Técnicos Implementados
* **Estruturas de Repetição:** Loops `do-while` controlam o fluxo contínuo do menu principal e dos submenus de exploração.
* **Estruturas de Decisão:** Blocos `switch-case` aninhados gerenciam as escolhas de caminhos e ações do jogador.
* **Mecânicas de RPG:** Sistema de inventário (detecção de espada/escudo), mitigação de dano por armadura, limite máximo de cura e gerenciamento de insumos (durabilidade da tocha).

---

## 🚀 Como Rodar o Jogo

O projeto foi desenvolvido utilizando o ambiente **VS Code** com o compilador **MinGW (GCC)**. Existem duas formas simples de executar o jogo na sua máquina:

### Opção 1: Pelo VS Code (Interface Visual)
1. Certifique-se de ter a extensão **C/C++** (da Microsoft) ou a extensão **Code Runner** instalada.
2. Abra o arquivo `programa.c` no seu VS Code.
3. Clique no botão de **Play** (Run Code) localizado no canto superior direito do editor. O jogo iniciará diretamente no terminal integrado.

### Opção 2: Pelo Terminal / Prompt de Comando (Interface de Linha de Comando)
Se você tiver o compilador GCC configurado nas variáveis de ambiente do seu sistema, basta abrir o terminal na pasta do arquivo e rodar os seguintes comandos:

1. **Compilar o código:**
   ```bash
   gcc programa.c -o JogoReino

2. Executar o jogo:

No Windows: JogoReino.exe ou .\JogoReino

No Linux/macOS: ./JogoReino

🎓 Atividade realizada em classe / Projeto desenvolvido para fins de estudo acadêmico.
