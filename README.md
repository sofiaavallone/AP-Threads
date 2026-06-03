# Exclusão mútua em sistema de contas bancárias com `pthreads`
_Atividade Prática de Arquitetura de Computadores e Sistemas Operacionais_
## Grupo
- Gabriela Benevides
- Sofia Avallone
- Marcela Parahym

## Descrição da atividade
Base original: Joel Adams, Calvin College, Fall 2013.

### `bankAccount.h` - Simulação de banco com múltiplas contas
 
 * Funcionalidades:
   - 5 contas bancárias independentes
   - Mutex individual por conta (maior paralelismo)
   - Operações: Depósito, Saque, Consulta de Saldo, Transferência
   - Log em arquivo (extrato por conta): `bank_log.txt` gerado pela função `writeLog()`
   - Proteção contra saque/transferência sem saldo suficiente

### `mutualExclusion.c` - Exclusão Mútua com múltiplas contas bancárias
 * Lê o número de threads da linha de comando, cria as threads, e cada uma delas fica executando um loop de 1000 transações. A cada transação, sorteia aleatoriamente qual conta e qual operação usar. No final junta todas as threads e imprime os saldos.
