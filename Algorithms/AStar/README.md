# Fluxograma do processo 


[1] Criar startNode → inserir em openSet
  ↓
[2] Enquanto openSet não vazio:
  ↓
[3]   current ← menor f do openSet
  ↓
[4]   current == goal?
       → Sim → [5] Reconstroi caminho e retorna
       → Não
  ↓
[6]   Marcar current como visitado
  ↓
[7]   Para cada vizinho:
         - Se válido e não visitado:
             - Calcular g, h, f
             - Criar Node, setar parent
             - Inserir no openSet
  ↓
[8] Se openSet esvaziar → retorna caminho vazio
