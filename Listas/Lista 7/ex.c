/* 

1)b

2)c

3)a

4)c

5)b

6)d

7)b

8) Porque big O descreve o crescimento assintótico quando n tende ao infinito. Multiplicar uma função por uma constante muda apenas a escala, 
não a taxa de crescimento para grandes n. Por exemplo, 1000n e n têm o mesmo comportamento assintótico O(n); 
o fator 1000 é irrelevante para a classificação de ordem de grandeza.

9) T(n)= O(g(n)): T é limitada superiormente por g (até constante) para n grandes;
T(n)= Omega(g(n)): T é limitada inferiormente por g (até constante) para n grandes;
T(n)= Theta(g(n)): T é simultaneamente O(g(n)) e Omega(g(n)) — ou seja, 
(g(n)) descreve uma cota assintoticamente exata (tanto acima quanto abaixo, até constantes).

10) Porque a cada comparação a busca binária divide por 2 o intervalo restante de possíveis posições. 
Para reduzir um conjunto de tamanho n a 1 elemento são necessárias cerca de log2 n divisões por 2. 
Logo o número de passos cresce proporcionalmente a log n.

11) Cada iteração externa (= log n delas) executa um loop interno de (n) operações. 
Logo o tempo total é Theta(n log n). Em notação assintótica: O(n log n) (também Omega(n log n), portanto Theta(n log n)).

12) Complexidade: O(n^logn); Cada nível multiplica por n chamadas sobre tamanho n/2.

*/