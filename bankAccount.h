/* bankAccount.h simulates a simple bank account
 *
 * Joel Adams, Calvin College, Fall 2013.
 */


// Shared Variables
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
double bankAccountBalance = 0;

// add amount to bankAccountBalance
void deposit(double amount) {
   //pthread_mutex_lock( &lock );
   bankAccountBalance += amount;
  // pthread_mutex_unlock( &lock );
}

// subtract amount from bankAccountBalance
void withdraw(double amount) {
  // pthread_mutex_lock( &lock );
   bankAccountBalance -= amount;
  // pthread_mutex_unlock( &lock );
}

void cleanup() {
   pthread_mutex_destroy(&lock);
}


/* 
Estender os códigos: bankAccount.h e mutualExclusion para contemplar
Pelo menos 5 contas diferentes sendo manipuladas, em vez de uma só como atualmente. THREADS
Novas funções//serviços, tendo um rol total de:   
                   + Deposito, 
                   + Saque, 
                   + Consulta de Saldo, 
                   +Transferência entre Contas.
A seleção da operação a ser realizada pela thread criada, bem como a conta a ser manipulada deve ser aleatória.
Fazer log (extrato) em arquivo sobre as opera coes realizadas em cada conta para fim de conferencia.
Atentar para as restrições comuns:
                  + Saque em conta sem saldo suficiente.
                  +  Transferência de conta sem saldo suficiente */
