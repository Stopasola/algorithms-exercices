
1.1. Um circo deseja saber qual o preço ideal dos ingressos, de acordo com a cidade que
visitam. Para tanto, eles descobriram que em média 120 pessoas comparecem em
cada sessão, quando o preço do ingresso é R$ 5,00. A partir disso, a cada redução de
R$ 0,50 há um aumento de público, que difere em cada cidade. Cada sessão tem um
custo de R$ 200,00 ao circo. Faça um programa que, dado o número adicional de
pessoas a cada redução de R$ 0,50 no preço do ingresso, imprima a tabela de lucro
de cada sessão. Considere a variação de preço entre R$ 5,00 e R$ 1,00. Informe
também ao usuário, qual é o valor de ingresso que gera o maior lucro. Dica: para
testar o algoritmo, considere taxas de aumento de 26 e 30 pessoas.


1.2. Faça um algoritmo que, dado o valor total em reais e o número de prestações
desejadas, calcule o valor de cada prestação. O número mínimo de prestações deve
ser 12. Se o número de prestações for maior ou igual a 24, adicione 10% de juros ao
valor total, se for maior ou igual a 36, adicione 15% de juros ao valor total.


1.3. Escreva um programa que leia quatro números inteiros e os imprima em ordem não
crescente. Seu programa não deve usar estruturas de repetição.


1.4. Considere um terminal de autoatendimento bancário que opera com cédulas nos
valores de 1.00, 5.00, 10.00, 50.00 e 100.00 unidades monetárias. Para retirar
dinheiro a partir deste terminal, um cliente do banco informa o valor do saque
desejado, e o terminal emite a quantia equivalente em notas. Além disso, o número
de cada tipo de nota é escolhido de forma a minimizar a quantidade total de cédulas
expedidas. Dessa forma, caso o valor da retirada seja de 70.00 unidades monetárias,
serão entregues ao cliente uma nota de 50.00 e duas notas de 10.00 (totalizando três
notas) e não, por exemplo, sete notas de 10.00 (sete notas no total) ou uma nota de
50.00 e quatro de 5.00 (totalizando cinco notas). Faça um programa para ler um
valor em unidades monetárias e determinar o número de cédulas expedidas pelo
terminal bancário caso essa quantia fosse retirada.
Modifique o programa original considerando as seguintes restrições:
    a) Existe um número fixo de notas de cada tipo. Este dado é fornecido como dado de entrada;
    b) O seu programa deve obter a melhor resposta (saque com o menor número de notas) considerando 
    o número de notas disponíveis. Por exemplo, se uma pessoa
    quer sacar 235, mas há apenas uma nota de 100.0, cinco notas de 50.0, vinte notas
    de 10.0 e dez notas de 5.0, então o seu programa deve devolver: 1 nota de 100, 2
    notas de 50, 3 notas de 10 e 5 notas de 1;
    c) Além disso, se não houver notas suficientes para o saque em questão, o seu
    programa deve informar isto com uma mensagem apropriada. Por exemplo, se umapessoa quer sacar 235, mas há apenas uma nota de 100.0, uma nota de 50.0, cinco notas de 10.0 e cinco notas de 5.0, então o seu programa deve devolver: Não há dinheiro suficiente para o saque.

1.5. Faça um programa que leia um ano (valor inteiro) e imprima se ele é bissexto ou
não. OBS: São bissextos todos os anos múltiplos de 400. Não sendo múltiplo de
400, são bissextos todos os anos múltiplos de 4 mas que não são múltiplos de 100.


1.6. Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número com exceção dele próprio. Ex: a soma dos divisores do número 66 é 1 + 2 +
3 + 6 + 11 + 22 + 33 = 78.


1.7. Em Matemática, o número harmônico designado por H(n) define-se como sendo a
soma da serie harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n. Faça um programa
que leia um valor n inteiro e positivo e apresente o valor de H(n).

1.8. Faça um programa que leia um valor N inteiro e positivo, calcule o mostre o valor
E, conforme a fórmula a seguir
                    E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!

1.9. Faça um programa que calcule e escreva o valor de S
                    S = 1/1 + 3/2 + 5/3 + 7/4 ... 99/50

1.10. Faça um programa que some os números ímpares contidos em um intervalo definido
pelo usuário. O usuário define o valor inicial do intervalo e o valor final deste
intervalo e o programa deve somar todos os números ímpares contidos neste
intervalo. Caso o usuário digite um intervalo inválido (começando por um valor
maior que o valor final) deve ser escrito uma mensagem de erro na tela, “Intervalo
de valores invalido” e o programa termina. Exemplo de tela de saída: Digite o valor
inicial e valor final: 5 10. Soma dos ímpares neste intervalo: 21.

1.11. Faça um programa que gera um numero aleatório de 1 a 1000. O usuário deve tentar
acertar qual o número foi gerado, a cada tentativa o programa deverá informar se o
chute é menor ou maior que o número gerado. O programa acaba quando o usuário
acerta o numero gerado. O programa deve informar em quantas tentativas o número
foi descoberto.

1.12. O funcionário chamado Carlos tem um colega chamado João que recebe um salário
que equivale a um terço do seu salário. Carlos gosta de fazer aplicações na caderneta
de poupança e vai aplicar seu salário integralmente nela, pois est á rendendo 2% ao
mês. João aplicará seu salário integralmente no fundo de renda fixa, que está
rendendo 5% ao mês. Construa um programa que deverá calcular e mostrar a quantidade de meses necessários para que o valor pertencente a João iguale ou
ultrapasse o valor pertencente a Carlos. Teste com outros valores para as taxas.

1.13. Faça um programa que leia vários números, calcule e mostre:
    a) A soma dos números digitados
    b) A quantidade de números digitados
    c) A média dos números digitados
    d) O maior número digitado
    e) O menor número digitado
    f) A média dos números pares

1.14. Calcule o consumo médio de um automóvel sendo fornecidos a distância total
percorrida (em Km) e o total de combustível gasto (em litros).
Entrada -> O arquivo de entrada contém dois valores: um valor inteiro X representando a
distância total percorrida (em Km), e um valor real Y representando o total de
combustível gasto, com um dígito após o ponto decimal.
Saída -> Apresente o valor que representa o consumo médio do automóvel com 3 casas após
a vírgula, seguido da mensagem "km/l".

2.1. Faça um algoritmo que leia 100 valores e verifique se existem valores iguais a 30.
Se existirem, escrever as posições em que eles estão armazenados.

2.2. Faça um algoritmo que leia 100 valores reais e armazene-os no vetor A. Em seguida
calcule e escreva o somatório dos valores armazenados.

2.3. Faça um algoritmo que copie o conteúdo de um vetor em um segundo vetor.

2.4. Faça um algoritmo que leia 10 nomes de pessoas e suas respectivas alturas. Em
seguida calcule a média das alturas e mostre o nome das pessoas que têm altura
acima da média e também a maior e menor altura.

2.5. Faça um algoritmo que, dados dois vetores inteiros A e B de 20 elementos, efetue as
respectivas operações indicadas por um outro vetor C de 20 elementos de caracteres,
também fornecido pelo usuário, contendo as quatro operações aritméticas em
qualquer combinação e armazenando os resultados em um quarto vetor D. Por
exemplo, suponha que A[1] = 10, B[1] = 3 e C[1] = '*', então D[1] = 30.

2.6. Armazenar números fornecidos pelos usuários em 2 vetores inteiros de 5 elementos
cada. Imprimir o vetor soma.

2.7. Imprimir o produto escalar de um número por um vetor de 10 elementos.

2.8. Gerar 100 números aleatórios e armazená-los em um vetor. Exibir o vetor.

2.9. Escrever um algoritmo que receba 10 números do usuário, armazene-os em um
vetor. O algoritmo deve ordenar os valores deste vetor em ordem crescente e
imprimir o vetor final.

2.10. Desenvolver um algoritmo que receba os valores de uma matriz de 4 linhas e 4
colunas e mostre quais são os elementos da diagonal principal.

2.11. Desenvolver um algoritmo para somar duas matrizes e exibir o resultado. O usuário
deve escolher a dimensão das mesmas.

2.12. Desenvolver um algoritmo para multiplicar duas matrizes e exibir o resultado. O
usuário deve escolher a dimensão das mesmas.

2.13. Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva os
elementos da diagonal principal.

2.14. Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva
todos os elementos, exceto os elementos da diagonal principal.

2.15. Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva
somente os elementos acima da diagonal principal.

2.16. Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e imprima a
soma dos elementos que estão acima da diagonal principal.

3.1. Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer
correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a
soma dos valores encontrados nas respectivas posições X e Y.

3.2. Declare um vetor de 10 posições e o preencha com os 10 primeiros números
impares e o escreva.

3.3. Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos e vice-
e-versa. Escreva ao final o vetor obtido.

3.4. Leia uma matriz 20 x 20. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou
uma mensagem de “não encontrado”.

3.5. Leia uma matriz 4 x 4 e troque os valores da 1a.linha pelos da 4a.coluna, vice-e-
versa. Escrever ao final a matriz obtida

3.6. Leia uma matriz 8 x 8 e a transforme numa matriz triangular inferior , atribuindo
zero a todos os elementos acima da diagonal principal, escrevendo-a ao final.

3.7. Leia uma matriz 5 x 5 e faça uma troca entre as diagonais superior e inferior.
Escreva-a ao final.

3.8. Leia duas matrizes 10 x 10 e faça uma substituição entre a diagonal inferior da
primeira coma diagonal superior da segunda.

3.9. Escreva um programa para simular uma calculadora simples com as seguintes
operações possíveis: 1 – adição, 2 – subtração, 3 – multiplicação, 4 – divisão, 5 –
sair do programa. Para cada uma das operações escreva um função.

3.10. Faça uma sub-rotina que receba por parâmetro um valor inteiro e positivo N e
retorne o valor de S. S = 1 + 1/1! + 1/2! + 1/3! + 1/N!

3.11. Escreva uma função de potenciação, em que os dados de entrada são: base e
expoente (inteiros).

3.12. Escreva um procedimento que receba um número inteiro e imprima o mês
correspondente ao número. Por exemplo, 2 corresponde à “fevereiro”. O
procedimento deve mostrar uma mensagem de erro caso o número recebido não faça
sentido. Gere também um algoritmo que leia um valor e chame o procedimento
criado.

3.13. Escreva uma função que receba um número inteiro. Esta função deve verificar se tal
número é primo. No caso positivo, a função deve retornar 1, caso contrário zero.
Escreva também um algoritmo para testar tal função.

3.14. Um número é dito ser capicua quando lido da esquerda para a direita é o mesmo que
quando lido da direita para a esquerda. O ano 2002, por exemplo, é capicua. Então,
elabore uma função para verificar se um número possui essa característica. Caso o
número seja capicua, a função deve retornar 1 e 0 em caso contrário. Escreva
também um algoritmo para testar tal função.

3.15. Criar uma função que verifique quantas vezes um número inteiro x é divisível por
um número inteiro y. A função deve retornar -1 caso não seja possível calcular.
Escreva também um algoritmo para testar tal função.

3.16. Escreva um procedimento que receba um número arábico inteiro e imprima o
corresponde número em romano. Por exemplo, para 5 a saída desejada é “V”. A
função deve ser capaz de gerar o número romano para os 50 primeiros inteiros. Uma
mensagem de erro deve ser mostrada caso um número fora dessa faixa seja recebido.
Crie também um algoritmo que leia um valor inteiro e chame o procedimento criado
acima para a impressão do número romano.

3.17. Faça um procedimento e uma função que receba  um vetor v, o número n de elementos do vetor 
v e um valor x. Retorne verdade caso x for igual a algum dos elementos de v, e falso caso contrário.

3.18. Faça um procedimento para ler um vetor. Este procedimento deve receber o número
de elementos do vetor e retornar o vetor lido. Faça também um procedimento para
mostrar os elementos de um vetor. Este procedimento deve receber o vetor e o
número de elementos deste vetor. Faça um algoritmo e um programa que leia 2
vetores A (com 5 elementos) e B (com 5 elementos) utilizando o procedimento de
leitura de vetor. O algoritmo/programa deverá fazer com que o vetor C receba os
elementos do vetor A multiplicados pelos elementos correspondentes do vetor B.
Por fim o algoritmo/programa deverá chamar o procedimento que mostra os
elementos de um vetor para mostrar os elementos dos vetores A, B e C.

3.19. Faça um programa que leia um conjunto de 15 valores e armazene-os em um vetor.
A seguir, separe-os em dois outros vetores (P e I) com cinco posições cada. O vetor
P armazena números pares e o vetor I armazena números ímpares. Como o tamanho
dos vetores pode não ser suficiente para armazenar todos os números, deve-se
sempre verificar se os mesmos já estão cheios. Caso P ou I estejam cheios, deve-se
mostrá-los e recomeçar o preenchimento a partir da primeira posição. Terminado o
processamento, mostrar o conteúdo restante dentro dos vetores P e I.

3.20. Uma companhia resolveu cadastrar todos os funcionários em um sistema
computacional. Você foi contratado para desenvolver o sistema em questão. Será
necessário armazenar os seguintes dados do funcionário:
    -> Código, nome, cargo, salário, endereço, telefone, status

O sistema deverá ter as opções para:
    a- Inclusão de funcionários
    b- Consulta de funcionários por nome ou código
    c- Alteração nos dados do funcionário
    d- Exclusão de funcionário
    e- Relatório de funcionários

Exercícios
4.1. A função de Ackermann é definida para valores inteiros e não negativos m e n da
seguinte forma:

                      { n + 1       se m = 0
            A(m, n) = { A(m - 1,1)  se m > 0 e n = 0 
                      { A(m - 1, A(m,n - 1))  se m > 0 e n = 0

Faça uma função recursiva para implementá-la. Qual o valor de A(3,2)?

4.2. Escreva uma função recursiva que calcule o número de grupos distintos com k
pessoas que podem ser formados a partir de um conjunto de n pessoas. A definição
abaixo da função Comb(n,k) define as regras:

                      { n                                   se k = 1
         Comb(m, n) = { 1                                   se k = m 
                      { Comb(n - 1, k - 1) + Comb(n - 1,k)  se 1 < k < n



4.3. Implemente uma função recursiva soma(n) que calcula o somatório dos n primeiros
números inteiros.

4.4. Um problema típico em ciência da computação consiste em converter um número da
sua forma decimal para a forma binária. Por exemplo, o número 12 tem a sua
representação binária igual a 1100. A forma mais simples de fazer isso é dividir o
número sucessivamente por 2, onde o resto da i-ésima divisão vai ser o dígito i do
número binário (da direita para a esquerda). Por exemplo: 12 / 2 = 6, resto 0 (1o
dígito da direita para esquerda), 6 / 2 = 3, resto 0 (2o dígito da direita para esquerda),

4.3 / 2 = 1 resto 1 (3o dígito da direita para esquerda), 1 / 2 = 0 resto 1 (4o dígito da
direita para esquerda). Resultado: 12 = 1100
    
    a) Escreva um procedimento recursivo Dec2Bin(n: integer) que dado um
    número decimal imprima a sua representação binária corretamente.

4.5. O máximo divisor comum (MDC) de dois números inteiros x e y pode ser calculado
usando-se uma definição recursiva:
    MDC(x, y) = MDC(x − y, y) se x > y .
Além disso, sabe-se que:
    MDC(x,y) = MDC(y, x)
    MDC(x, x) = x

Exemplo: MDC(10,6) = MDC(4,6) = MDC(6,4) = MDC(2,4) = MDC(2,2) = 2
Então, pede-se que seja criada uma função recursiva para descrever tal definição.
Crie, também, um algoritmo que leia os dois valores inteiros e utilize a função
criada para calcular o MDC de x e y, e imprima o valor computado.

4.6. Seja uma estrutura para descrever os carros de uma determinada revendedora,
contendo os seguintes campos:
    
    - marca: string de tamanho 15
    - ano: inteiro 
    - cor: string de tamanho 10 
    - preço: float

    a) Escrever a definição da estrutura carro.
    b) Declarar o vetor vetcarros do tipo da estrutura definida acima, de tamanho 20 e
    global.
    Crie um menu para:
    c) Definir um bloco de programa para ler o vetor vetcarros.
    d) Definir um bloco de programa que receba um preço e imprima os carros (marca, cor
    e ano) que tenham preço igual ou menor ao preço recebido.
    e) Defina um bloco de programa que leia a marca de um carro e imprima as informações
    de todos os carros dessa marca (preço, ano e cor).
    f) Defina um bloco de programa que leia uma marca, ano e cor e informe se existe ou
    não um carro com essas características. Se existir, informar o preço.

4.7. Elaborar um algoritmo que auxilie no controle de uma fazenda de gado que possuí
um total de 2000 cabeças de gado. A base de dados é formada por um conjunto de
estruturas (registros) contendo os seguintes campos referente a cada cabeça de gado:

    - código: código da cabeça de gado,
    - leite: número de litros de leite produzido por semana,
    - alim: quantidade de alimento ingerida por semana - em quilos,
    - nasc: data de nascimento - mês e ano,
    - abate: ‘N" (não) ou ‘S’ (sim).

O campo nasc. é do tipo struct data que por sua vez, possui dois campos: mês e ano
Elaborar funções para:

    a) Ler a base de dados (código, leite, alim, nasc.mês e nasc.ano), armazenado em um
    vetor de estruturas.
    b) Preencher o campo abate, considerando que a cabeça de gado irá para o abate caso:
        - tenha mais de 5 anos, ou;
        - produza menos de 40 litros de leite por semana, ou;
        - produza entre 50 e 70 litros de leite por semana e ingira mais de 50 quilos de
        alimento por dia.
    c) Devolver a quantidade total de leite produzida por semana na fazenda.
    d) Devolver a quantidade total de alimento consumido por semana na fazenda.
    e) Devolver a quantidade total de leite que vai ser produzido por semana na fazenda,após o abate
    f) Devolver a quantidade total de alimento que vai ser consumido por semana na
    fazenda, após o abate
    g) Devolver número de cabeças de gado que iram para o abate.
    h) Sair do programa.
    
4.8. Seja um algoritmo para controlar os produtos do estoque de um supermercado. Para
cada produto, tem-se os seguintes campos:
    
    - nome: string de tamanho 15
    - setor: caracter
    - quantidade: inteiro
    - preço: real //preço por unidade do produto

Escrever a definição da estrutura produto.

    b) Declarar o vetor estoque do tipo da estrutura definida acima, de tamanho 100
    e global.
    b) Crie um menu para:
    c) Definir um bloco de instruções para ler o vetor estoque.
    d) Definir um bloco de instruções que receba um setor e devolva o número de
    diferentes produtos desse setor.
    e) Definir um bloco de instruções que calcule e devolva o total de capital
    investido em produtos do supermercado.
    f) Sair do Programa.

5.1. Foi realizada uma pesquisa de algumas características físicas de 50 habitantes de uma
certa região. De cada habitante foram coletados os seguintes dados: sexo, cor dos
olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e
idade. Faça um procedimento que leia esses dados em um vetor de registro. O vetor
de registro deve ser enviado por referência.

5.2. Faça um procedimento que receba o vetor de registro definido no exercício anterior
(28), por parâmetro, e retorna também por parâmetro: a maior idade entre os
habitantes e a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e
35 (inclusive) e que tenham olhos verdes e cabelos louros.

5.3. Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De cada
habitante foram coletados os dados: idade, sexo, salário e número de filhos. Faça um
procedimento que leia esses dados em um vetor de registro. O vetor de registro deve
ser enviado por referência.

5.4. Faça um procedimento que receba o vetor de registro definido no exercício anterior
(30), por parâmetro, e retorna também por parâmetro: a média de salário entre os
habitantes, a menor e a maior idade do grupo e a quantidade de mulheres com 3 filhos
que recebe até R$500,00.

5.5. Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade
de filmes retirados por seus clientes durante o ano de 1997. Agora, esta locadora está
fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma
locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna,
também por parâmetro, um vetor contendo a quantidade de locações gratuitas a que
cada cliente tem direito.

5.6. Faça uma função que recebe, por parâmetro, uma matriz A(5,5) e retorna a soma dos
seus elementos.

5.7. Faça uma função que recebe, por parâmetro, uma matriz A(6,6) e retorna a soma dos
elementos da sua diagonal principal e da sua diagonal secundária.

5.8. Faça uma função que receba, por parâmetro, uma matriz A(12,12) e retorne a média
aritmética dos elementos abaixo da diagonal principal.

5.9. Escreva um programa que leia o raio de um círculo e faça duas funções: uma função
chamada área que calcula e retorna a área do círculo e outra função chamada
perímetro que calcula e retorna o perímetro do círculo. 
                    Área = PI * r 2 ; Perímetro = PI * 2 * r;

5.10. Escreva um programa composto de uma função Max e o programa principal como
segue: 
    a) A função Max recebe como parâmetros de entrada dois números inteiros e
    retorna o maior. Se forem iguais retorna qualquer um deles; 
    b) O programa principal lê 4 séries de 4 números a,b,c e d. Para cada série lida 
    imprime o maior dos quatro números usando a função Max.

5.11. Crie uma função que receba um número natural e retorne o seu fatorial.

5.12. Utilizando a função criada anteriormente, faça um programa que receba 2 números
naturais n e p, e mostre o resultado da combinação destes n elementos tomados p a p.

5.13. Dizemos que uma matriz quadrada inteira é um quadrado mágico (1) se a soma dos
elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos
das diagonais principal e secundária são todas iguais.
Dada uma matriz quadrada A nxn , verificar se A é um quadrado mágico.

5.15. Escrever um programa que cadastre vários produtos. Em seguida, imprima uma lista
com o código e nome da cada produto. Por último, consulte o preço de um produto
através de seu código.

5.16. Faça um programa em C para ler e manipular informações de um cadastro de
automóveis. São necessárias duas estruturas: carro e proprietário. Todos os dados de
um carro devem ser lidos e depois impressos. Os campos das estruturas são: carro:
modelo (char), ano (int), placa (char), proprietário (proprietário); proprietário: cpf
(long int), nome (char).

5.17. Defina uma estrutura para armazenar a ficha média de um paciente (peso, altura,
idade). Crie uma variável para armazenar a informação de 35 pacientes e leia as
informações dos 35 pacientes. Em seguida faça uma função que calcule a média de
idade dos pacientes que tenham peso menor que p kg, onde p é o parâmetro da função.

5.18. Crie uma função recursiva que permita imprimir o n-éssimo número da sequência de
Fibonacci.

5.19. Escreva uma função recursiva que calcule a soma dos dígitos de um inteiro
estritamente positivo n. A soma dos dígitos de 132, por exemplo, é 6.
20. Desenvolva uma função recursiva para efetuar o somatório de 1 até n (1 + 2 + 3 + ...
+ n - 1 + n).

Exemplos: Somat(8), retorna 36 ( 1+2+3+4+5+6+7+8 = 36 )
          Somat(10), retorna 55 ( 1+2+3+4+5+6+7+8+9+10 = 55 )

5.21. Torre De Hanói é um quebra-cabeça criado pelo matemático francês Edourd Lucas
em 1883. Esse quebra-cabeça consiste de 3 hastes e n discos, inicialmente dispostos
em ordem decrescente de tamanho na haste esquerda. O objetivo desse jogo é
transferir os n discos da haste inicial para a haste mais a direita, seguindo as regras:
    - Um disco deve ser movido de cada vez. 
    - Cada movimento consiste em retirar um disco do topo de uma haste e passar para o topo de outra haste.
    - Um disco maior não deve ficar por cima de um disco menor.

Faça uma função recursiva para resolver o problema da Torre de Hanói.

6.1. Uma certa firma fez uma pesquisa para saber se as pessoas gostaram ou não de um
novo produto. Sabendo que foram entrevistadas n pessoas e que o usuário deve
fornecer:
    - o valor de n.
    - o nome completo de cada entrevistado,
    - o sexo de cada entrevistado (f/m),
    - a idade de cada entrevistado,
    - sua resposta (s)im, (n)ão ou (i)ndeciso,
    - e o preço pago pelo produto.

Desenvolva um programa em linguagem C para armazenar os dados dos entrevistados em
um arquivo de texto. Neste programa, variáveis, vetores, matrizes e ponteiros NÃO poderão ser globais.
O programa deve ainda, via funções, realizar o seguinte conjunto de funcionalidades:

    1) cálculo da média de idade dos entrevistados e a média de preços paga por eles.
    2) listagem de quais pessoas responderam sim, não ou indeciso, conforme queira
    o usuário.
    3) cálculo de quantos entrevistados têm idade acima, igual e abaixo da média.
    4) cálculo de quantos entrevistados pagaram acima da média e quantos pagaram abaixo.

As funcionalidades 1, 3 e 4 serão implementadas por funções que não ‘imprimem’
mensagem em tela. Assim sendo, os resultados delas devem ser ‘impressos’ em
outra(s) função(ões). Quanto ao usuário, ele poderá escolher quais funcionalidades utilizar,
selecionando uma por vez e podendo repeti-las.
O usuário poderá determinar ainda se a funcionalidade escolhida se aplicará a
ambos os sexos ou a um determinado por ele.

6.2. Considere um arquivo texto (denominado “dados.txt”) que contém, em cada linha, as
seguintes informações sobre os modelos de uma determinada agência:
    
    - nome (cadeia de 30 caracteres, ocupando as colunas de 1 a 30 do arquivo texto);
    - sexo (um caractere, ocupando a coluna 31 do arquivo texto, podendo ser ‘M’ ou ‘F’);
    - cor dos olhos (um caractere, ocupando a coluna 32 do arquivo texto, podendo ser ‘A’, ‘B’, ‘C’, ou ‘D’);
    - altura (valor real em metros, ocupando as colunas de 34 a 37 do arquivo texto);
    - peso (valor real em quilos, ocupando as colunas de 39 a 43 do arquivo texto).
    
6.3. Faça um programa que separe este arquivo texto em dois arquivos binários de
registros cujos campos são as informações descritas acima: o 1o arquivo deve conter
apenas os modelos do sexo masculino (‘M’) e o 2o arquivo deve conter apenas os
modelos do sexo feminino (‘F’).

6.4. Faça um programa que crie um arquivo TEXTO em disco, com o nome “dados.txt”,
e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um número
em cada linha.

6.5. Faça um programa que crie um arquivo BINÁRIO em disco, com o nome “dados.bin”,
e escreva neste arquivo em disco uma contagem que vá de 1 até 100, com um número
em cada linha.

6.6. Faça um programa que leia um arquivo texto do disco, lendo linha a linha, e exibindo
cada uma das linhas numeradas na tela. A ideia é podermos pegar um arquivo um
arquivo texto qualquer (pode ser inclusive o arquivo do programa fonte – arquivo “.c”
– de um destes exercícios) e mostrar na tela com as linhas numeradas. 

6.7. Faça um programa que leia (do teclado) um cadastro de 10 alunos, indicando o nome,
nota1, nota2. Calcule a média aritmética simples dos 10 alunos e depois escreva em
um arquivo texto os dados de cada aluno: nome, nota1, nota2 e média. Lembre-se de
que as notas e média deverão ser apresentadas como valores que possuem até 2 casas
após a vírgula.

8. Faça um programa que peça para o usuário entrar um texto que deseja procurar (uma
palavra) e que em seguida leia um arquivo texto do disco e procure por esta palavra
no arquivo. Caso seja encontrada a palavra digitada pelo usuário em alguma das linhas
do arquivo texto lido do disco, o programa deverá exibir na tela o número da linha do
arquivo onde encontrou esta ocorrência da palavra, bem como o conteúdo da linha
onde se encontra a palavra procurada. Dica: use o comando “strstr” para procurar a
palavra.

6.9. Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas
vezes cada letra do alfabeto aparece dentro do arquivo.

6.10. Faça um programa que receba  do usuário um arquivo texto. Crie outro arquivo texto 
contendo o texto do arquivo de entrada, mas com as vogais substituídas por ‘*’.

6.11. Faça um programa que leia um arquivo contendo o nome e o preço de diversos
produtos (separados por linha), e calcule o total da compra.

6.12. Codifique, compile e execute um programa que:

    (a) crie/abra um arquivo texto de nome “arq.txt”,
    (b) permita que o usuário entre com diversos caracteres nesse arquivo, até que o
    usuário entre com o caractere ‘0’
    (c) reinicie o arquivo, fazendo o ponteiro apontar para seu início, e
    (d) lendo-o caractere por caractere, e escrevendo na tela todos os caracteres
    armazenados.

6.13. Faça um programa que receba do usuário um arquivo, e mostre na tela  ́ quantas linhas
esse arquivo possui.

6.14. Desenvolver um programa que lê o conteúdo de um arquivo e cria um arquivo com o
mesmo conteúdo, mas com todas as letras minúsculas convertidas para maiúsculas.
Os nomes dos arquivos serão fornecidos, via teclado, pelo usuário. A função que
converte maiúscula para minúscula e o toupper(). Ela é aplicada em cada caractere da
string.

6.15. Faça um programa que recebe como entrada o nome de um arquivo de entrada e o
nome de um arquivo de saída. Cada linha do arquivo de entrada possui colunas de
tamanho de 30 caracteres. No arquivo de saída deverá ser escrito o arquivo de entrada
de forma inversa. Veja um exemplo:

Arquivo de entrada:
    Hoje é dia de prova de AP
    A prova está muito fácil
    Vou tirar uma boa nota

Arquivo de saída:
    Aton aob amu rarit uov
    Licáf otium átse avorp A
    PA ed avorp ed aid é ejoH

6.16. Dado um arquivo que contenha as dimensões de uma matriz (linha e coluna, a
quantidade de posições que será anulada, e as posições; Faça um programa que abra
esse arquivo em modo leitura e imprima no programa e em um novo arquivo a matriz
com as dimensões dadas no arquivo lido, e todas as posições especificadas no arquivo
ZERA-DAS e o restante recebendo o valor 1.


6.17. Faça um que abra um arquivo HTML e elimine todas as “tags” do texto, ou seja, o
programa deve gerar um novo arquivo em disco que elimine todas as tags Html que
são caracterizadas por comandos entre “”. Veja abaixo um exemplo de um texto em
HTML e do texto que deverá ser gerado pelo programa após eliminar as tags Html

7.1. Escreva um programa que solicita ao usuário um número n e então lê um vetor de n
notas e calcula a média aritmética.

7.2. Faça um programa que leia o tamanho de um vetor de inteiros e reserve
dinamicamente memória para esse vetor. Em seguida, leia os elementos desse vetor,
imprima o vetor lido e mostre o resultado da soma dos números ímpares presentes no
vetor.

7.3. Considere a seguinte estrutura:
        typedef struct aluno aluno;
        struct aluno {
            char nome[30];
            float media;
            int faltas;
        };
Faça um programa que leia informações de n alunos em um vetor alocado
dinamicamente. Em seguida, imprima as informações lidas na ordem decrescente das
médias dos alunos.

7.4. Criar um tipo abstrato de dados que represente uma pessoa, contendo nome, data de
nascimento e CPF. Crie uma variável que é um ponteiro para este TAD (no programa
principal). Depois crie uma função que receba este ponteiro e preencha os dados da
estrutura e também uma função que receba este ponteiro e imprima os dados da
estrutura. Finalmente, faça a chamada a esta função na função principal.

7.5. Seja a seguinte struct que é utilizada para descrever os produtos que estão no
estoque de uma loja :
                        struct Produto {
                            char nome[30]; 
                            int codigo    
                            double preco; 
                        };

a) Escreva uma instrução que declare uma matriz de Produto com 10 itens de
produtos;
b) Atribua os valores "Pe de Moleque", 13205 e R$0,20 aos membros da posição 0
e os valores "Cocada Baiana", 15202 e R$0,50 aos membros da posição 1 da
matriz anterior;
c) Faça as mudanças que forem necessárias para usar um ponteiro para Produto ao
invés de uma matriz de Produtos. Faça a alocação de memória de forma que se
possa armazenar 10 produtos na área de memória apontada por este ponteiro e
refaça as atribuições da letra b;
d) Escreva as instruções para imprimir os campos que foram atribuídos na letra c.


7.6 Crie uma struct para descrever restaurantes. Os campos devem armazenar o nome
do restaurante, o endereço, o tipo de comida (brasileira, chinesa, francesa, italiana,
japonesa, etc) e uma nota para a cozinha (entre 0 e 5). Crie uma lista encadeada com
esta struct e escreva um programa que:

a) Insira um novo restaurante na lista;
b) Leia uma lista de restaurantes a partir de um arquivo;
c) Grave a lista de restaurantes para um arquivo;
d) Liste todos os restaurantes na tela;
e) Liste os restaurantes com cozinha com nota superior a um determinado valor,
determinado pelo usuário;
f) Liste todos os restaurantes com determinado tipo de comida, determinado pelo
usuário.

8.1. O número3025 possui a seguinte característica:
        
                    30 + 25 = 55
                    55 2 = 3025

Fazer um algoritmo que dado um número de 4 dígitos calcule e escreva se ele possui ou
não esta característica.

8.2. Supondo que a população de um país A seja da ordem de 90.000.000 de habitantes
com uma taxa anual de crescimento de 3% e que a população de um país B seja,
aproximadamente, de 200.000.000 de habitantes com uma taxa anual de crescimento
de 1,5%, fazer um algoritmo que calcule e escreva o número de anos necessários
para que a população do país A ultrapasse ou iguale a população do país B,
mantidas essas taxas de crescimento.


8.3. Um determinado material radioativo perde metade de sua massa a cada 50 segundos.
Dada a massa inicial, em gramas, fazer um algoritmo que determine o tempo
necessário para que essa massa se torne menor do que 0,5 grama. Escreva a massa
inicial, a massa final e o tempo calculado em horas, minutos e segundos.

8.4. Foi feita uma pesquisa para determinar o índice de mortalidade infantil em um certo
período. Fazer um algoritmo que:
- leia inicialmente o número de crianças nascidas no período;
- leia, em seguida um número indeterminado de linhas, contendo, cada uma, o sexo
de uma criança morta (masculino, feminino) e o número de meses de vida da
criança. A última linha, que não entrará nos cálculos, contém no lugar do sexo a
palavra “vazio”; Determine e imprima:

    a) a porcentagem de crianças mortas no período;
    b) a porcentagem de crianças do sexo masculino mortas no período;
    c) a porcentagem de crianças que viveram 24 meses ou menos no período.

8.5. Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica em
uma determinada cidade. Para isso, são fornecidos os seguintes dados: - preço do
kWh consumido; - número do consumidor; - quantidade de kWh consumidos
durante o mês; - código do tipo de consumidor (residencial, comercial, industrial). O
número do consumidor igual a zero deve ser usado como flag. Fazer um algoritmo
que:

- Calcule:
a) para cada consumidor, o total a pagar;
b) o maior consumo verificado;c) o menor consumo verificado;
d) o total do consumo para cada um dos três tipos de consumidores;
e) a média geral de consumo;

- Escreva:
a) para cada consumidor, o seu número e o total a pagar;
b) o que foi calculado nos itens b, c, d, e acima especificados.
6. Fazer um algoritmo que calcule e escreva o número de grãos de milho que se pode
colocar num tabuleiro de xadrez, colocando 1 no primeiro quadro e nos quadros
seguintes o dobro do quadro anterior.