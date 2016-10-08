# forks_T2
Implementação de herança com fork.<br>
**Projeto desenvolvido por alunos de Tecnologia da Informação da UFRN para a disciplina de Sistemas Operacionais**

####PROFESSOR
Ivanovitch Medeiros Dantas da Silva 

####AUTORES: 
Francleide Simão e José Victor Andrade

####OBJETIVO
O objetivo desse projeto é implementar uma hierarquia de processos, utilizando a função fork, seguindo as seguintes instruções:
<ul>
<li>1s corresponde a 1 ano</li>
<li>Pai tem o filho 01 aos 18 anos</li>
<li>Filho 01 finaliza aos 5 anos</li>
<li>Pai tem o filho 02 aos 20 anos</li>
<li>Filho 02 tem o Neto 01 aos 15 anos</li>
<li>Filho 02 finaliza aos 20 anos</li>
<li>Neto 01 finaliza aos 5 anos</li>
<li>Pai tem o filho 03 aos 21 anos</li>
<li>Filho 03 tem o neto 02 aos 3 anos</li>
<li>Filho 03 finaliza aos 5 anos</li>
<li>Neto 02 finaliza aos 10 anos</li>
<li>Pai finaliza aos 33 anos</li>
</ul>

####IMPLEMENTAÇÃO
<p>A implementação foi feita utilizando a linguagem C++ no sistema operacional Ubuntu.<br>
O programa irá exibir o ciclo de vida de cada processo definido pelas instruções, citadas anteriormente. Cada ciclo de vida começa em 0 (zero) e é exibida a mensagem: "[Nome do processo] nasceu!". A partir de 1 (um) é exibida a seguinte mensagem: "[Nome do processo]([Numero do processo]), tenho x ano(s) | Meu Pai [Numero do processo pai]". Ao final de cada "ciclo de vida" o processo exibe a mensagem: "[Nome do processo] morreu com [idade do processo] anos". 
<br> *Obs: processo pai é o processo que gera o processo em execução.
</p>
_Se desejar implementar no Windows altere a função **fork()** por **CreateProcess()**_<br><br>
<a href="https://github.com/francleide/forks_T2/blob/master/Trabalho_2.cpp">Código do Projeto</a>

######EXECUÇÃO
Para executar abra o terminal do linux. Navegue até a pasta em que está o arquivo Trabalho_2.cpp e execute o código:<br>
<code>g++ Trabalho_2.cpp - o [um nome]</code><br>
pressione ENTER e depois execute:<br>
<code>./[um nome]</code> <br>
pressione ENTER e o programa será executado.

####VÍDEO
