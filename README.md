# Algoritmos e Técnicas de Programação em C

Este repositório reúne o código desenvolvido para a disciplina **Algoritmos e Técnicas de Programação**, com foco em conceitos fundamentais da linguagem **C**.

## 🎯 Objetivo

O programa tem como propósito:

- Solicitar dados do usuário: nome, valor do investimento e tempo de aplicação (em anos).
- Calcular o valor final de um investimento utilizando **juros simples**.
- Demonstrar o uso de **variáveis primárias** (int, float, char) e **compostas** (vetores e matrizes).
- Aplicar **ponteiros** para manipulação direta de valores na memória.
- Exibir valores e **endereços de memória** no terminal, facilitando o entendimento do funcionamento interno do programa.

## 📂 Estrutura do Projeto

- `trabalho.c` — Código-fonte principal escrito em C.
- `README.md` — Este arquivo de documentação.

## 🚀 Como Compilar e Executar

Certifique-se de estar no diretório raiz do projeto e de possuir o compilador GCC instalado.

No terminal, execute:

```bash
gcc investimento_ponteiros.c -o investimento_ponteiros
./investimento_ponteiros
```

## 💡 Recursos Abordados

- Entrada e saída de dados
- Operações matemáticas (juros simples)
- Manipulação de vetores e matrizes
- Utilização de ponteiros
- Exibição de endereços de memória

## 📋 Exemplo de Execução

```text
Digite seu nome: André
Digite o valor inicial do investimento: 35000
Digite o número de anos: 2

--- RESULTADOS ---
Investidor: André
Valor inicial: 35000.00
Tempo (anos): 2
Valor final (com juros simples): 38500.00

Vetor atualizado: 99, 20, 30
Matriz:
1 2
3 4

Endereço do primeiro elemento do vetor: 0x7ffd2c8aa8d4
Endereço do primeiro elemento da matriz: 0x7ffd2c8aa8e0
```

## 📚 Conceitos Abordados

- **Juros simples:** Cálculo do valor final de um investimento usando a fórmula `VF = VI * (1 + taxa * tempo)`.
- **Vetores e matrizes:** Estruturas para armazenar múltiplos valores.
- **Ponteiros:** Permitem acessar e manipular diretamente os endereços de memória das variáveis.

## 🧑‍💻 Sugestões de Exercícios

- Alterar a taxa de juros utilizada no cálculo.
- Implementar o cálculo de juros compostos.
- Adicionar validação para os dados de entrada.
- Exibir todos os elementos e endereços do vetor e da matriz.

## 🔗 Referências

- [Documentação oficial do C](https://devdocs.io/c/)
- [Tutorial de C - Programação Progressiva](https://www.programiz.com/c-programming)
- [Material sobre ponteiros em C](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)

## ℹ️ Ambiente de Desenvolvimento

Este projeto está configurado para execução em um **dev container** baseado no Ubuntu 24.04.2 LTS.

### Ferramentas disponíveis

O terminal já possui diversos utilitários instalados para facilitar o desenvolvimento e manutenção do projeto:

- Gerenciamento de pacotes: `apt`, `dpkg`
- Containers e orquestração: `docker`, `kubectl`
- Controle de versão: `git`, `gh`
- Transferência de arquivos: `curl`, `wget`, `ssh`, `scp`, `rsync`
- Criptografia: `gpg`
- Monitoramento de processos e rede: `ps`, `lsof`, `netstat`, `top`
- Navegação e busca: `tree`, `find`, `grep`
- Compactação e descompactação: `zip`, `unzip`, `tar`, `gzip`, `bzip2`, `xz`

### Navegador

Para abrir uma página web no navegador padrão do host, utilize:

```bash
"$BROWSER" <url>
```

## Suporte e Contato

Em caso de dúvidas, sugestões ou contribuições, entre em contato pelo e-mail: **andrehlbarbosa@gmail.com**

---

Desenvolvido por André Luiz Barbosa, para a disciplina de Algoritmos e Técnicas de Programação, Ciência da Computação, Anhanguera, Setembro, 2º Semestre, 2025.
