# Fluxo Operacional e Regras de Negócio — EcoReturn

Este documento detalha o fluxo de ponta a ponta do ecossistema EcoReturn, mapeando a interação entre o cidadão gerador de resíduos e o coletor através do hardware do Totem.

## 1. Visão Geral do Ecossistema
O sistema é composto por três pilares integrados para eliminar barreiras digitais e promover a economia circular:
* **Portal do Gerador (Web Morador):** Canal de captação e agendamento.
* **Hub Inteligente (Totem Físico):** Ponto de interação, pesagem e distribuição de rotas para o coletor.

---

## 2. Fluxo Operacional Detalhado

### Fase 1: Solicitação e Roteirização
1. **Ação do Morador:** O cidadão acessa a plataforma web, informa o endereço e faz o inventário aproximado do descarte (ex: periféricos, linha branca).
2. **Geração do Token:** O sistema gera um código de confirmação seguro que deve ser entregue ao coletor.
3. **Processamento:** O software agrupa as solicitações por geolocalização e otimiza as rotas de coleta automaticamente.

### Fase 2: O Totem e a Retirada
1. **Autenticação:** O coletor acessa o totem usando biometria ou cartão físico (NFC/RFID), sem precisar de smartphone.
2. **Ordem de Serviço:** O totem imprime um ticket térmico com os endereços da rota do dia otimizada.
3. **Execução:** O coletor recolhe os itens e recolhe o token com o morador.

### Fase 3: Validação e Segurança
1. **Depósito:** O coletor retorna ao Hub e insere os materiais na balança integrada do ecoponto.
2. **Mecanismo Anti-desvio:** O sistema solicita o token e cruza o peso real da balança com a estimativa do morador, gerando alertas em caso de inconsistências graves para auditar desvios de materiais valiosos.

### Fase 4: Gamificação Social e Educação
1. **Créditos Educativos:** O descarte validado gera pontos baseados no peso e periculosidade do material.
2. **Educação como Moeda:** Os pontos acumulados são trocados por módulos de cursos profissionalizantes de manutenção técnica na Oficina Escola.
