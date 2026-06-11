# 🧪 Roteiro de Teste de Usabilidade

**PROJETO:** EcoReturn - Sistema de Logística Reversa de Lixo Eletrônico  
**AUTORES:** (Análise e Desenvolvimento de Sistemas - 1º Período | Embarque Digital / Faculdade Senac)  
Abner Levy  
Alerrandro Braz  
Carlos Gabriel  
Jamile Keiller  
Júlia Cássia  

---

## 🌍 Descrição do Contexto Social e Inclusivo
O projeto EcoReturn propõe uma solução de economia circular para o descarte de resíduos eletrônicos em Recife/PE. 

> Para garantir a acessibilidade de coletores que não possuem smartphones ou pacotes de dados ativos, a solução centraliza-se em um **Totem Físico de Autoatendimento** localizado nos Hubs/Ecopontos. 

O coletor interage com o totem no início do dia para retirar sua ordem de serviço (O.S.) impressa e retorna ao final para depositar o material na balança integrada, validar o descarte e converter o peso em créditos educativos para cursos de capacitação profissional.

---

## 🎯 Objeto de Teste e Objetivo Geral

*   **Objeto de Teste:** Protótipo de Interface do Totem Físico de Autoatendimento (Visão do Coletor).
*   **Objetivo Principal:** Mensurar a fricção de interação de usuários leigos com um terminal físico touchscreen através de uma abordagem de **teste às cegas** (com participantes que desconhecem o fluxo e as regras de negócio da aplicação).

O teste busca avaliar a intuitividade, clareza visual e facilidade de navegação para identificar se um usuário leigo (simulando o coletor de rua) consegue retirar uma rota de trabalho e, posteriormente, validar a devolução dos materiais pesados no ecoponto para receber seus créditos educativos, sem o auxílio de terceiros.

---

## 🎬 Cenários de Uso e Tarefas Práticas

### 🔹 CENÁRIO 1: Início do Expediente - Autenticação e Impressão da Rota do Dia
*   **Contexto repassado ao usuário:** *"Você é um coletor cadastrado no programa EcoReturn. Você acabou de chegar ao Hub físico no início do seu dia de trabalho e precisa descobrir para quais endereços em Recife você deve ir para recolher o lixo eletrônico agendado pelos moradores. Faça o login e imprima a sua rota."*
*   **Tarefa 1:** Realizar o acesso ao sistema na tela inicial simulando a identificação (Biometria/NFC).
*   **Tarefa 2:** Analisar as informações da rota disponível na tela e comandar a ação de impressão do ticket térmico (O.S.) com o itinerário do dia.

### 🔹 CENÁRIO 2: Fim do Expediente - Devolução e Validação do Descarte
*   **Contexto repassado ao usuário:** *"Você retornou da rua trazendo uma impressora e cartuchos coletados na casa de um morador. Agora você precisa dar baixa nessa coleta no Totem, pesar o material na balança acoplada e validar o recebimento dos seus pontos para trocar por cursos."*
*   **Tarefa 3:** Utilizar o teclado virtual na tela do totem para digitar o código de confirmação gerado pelo morador (**KRTX-7284**).
*   **Tarefa 4:** Confirmar e ajustar (se necessário) la lista de materiais na tela, simular a validação por foto e finalizar o fluxo para ver o saldo de pontos (XP) recebidos.

---

## 📊 3. Indicadores de Observação (Métricas)
Durante a execução do teste, os seguintes indicadores devem ser monitorados e registrados:
*   **Tempo total por tarefa:** Cronometrado do início do cenário até o clique final.
*   **Dificuldades encontradas:** Momentos de hesitação, bloqueio ou confusão visual.
*   **Erros cometidos:** Cliques em elementos não clicáveis ou caminhos incorretos.
*   **Necessidade de ajuda:** Casos em que o participante desiste ou pede instrução para prosseguir.
*   **Fluxo abandonado:** Registrado se o participante não conseguir finalizar a atividade de forma alguma.

---

## 🏆 4. Critérios de Sucesso
O protótipo será considerado intuitivo e aprovado se atingir os seguintes parâmetros de usabilidade:

*   **Tarefas 1 e 2 (Retirada de Rota):** Conclusão em até **1 minuto**, com no máximo **4 cliques errados**.
*   **Tarefas 3 e 4 (Validação):** Conclusão em até **1 minuto e 30 segundos** (considerando o tempo de digitação no teclado virtual), com no máximo **5 cliques errados**.
