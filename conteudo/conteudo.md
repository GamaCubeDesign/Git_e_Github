# 🧠 Capacitação Git e GitHub

## 📌 O que é o Git?

**Git** é um sistema de controle de versão distribuído, criado por **Linus Torvalds** (o criador do Linux) em 2005. Ele permite que várias pessoas trabalhem em um projeto ao mesmo tempo, acompanhando todas as alterações feitas no código.

### Vantagens do Git
- Histórico completo de alterações
- Permite trabalhar offline
- Suporte a **branches** (ramificações)
- Rápido e eficiente
- Resolução de conflitos e fusão de código (merge)

---

## ☁️ O que é o GitHub?

**GitHub** é uma plataforma online que hospeda repositórios Git. Ele adiciona uma camada social ao Git: permite colaborar, revisar código, abrir issues, fazer pull requests e muito mais.

### Outras plataformas similares
- GitLab
- Bitbucket
- SourceForge

---

## ⚖️ Diferença entre Git e GitHub

| Git                           | GitHub                          |
|-------------------------------|---------------------------------|
| Sistema de controle de versão | Plataforma de hospedagem para repositórios Git |
| Funciona localmente           | Funciona na nuvem               |
| Comandos no terminal          | Interface web + integração com Git |
| Gratuito e open-source        | Gratuito (com planos pagos)     |

---

## 🛠️ Principais Comandos Git

### 📦 Inicialização
```bash
git init                    # Inicializa um novo repositório Git
git clone <url>            # Clona um repositório existente
```

### ⚙️ Configuração
```bash
git config --global user.name "Seu Nome"
git config --global user.email "seu.email@exemplo.com"
git config --list          # Lista todas as configurações
```

### 📊 Status e Informações
```bash
git status                 # Mostra o status dos arquivos
git log                    # Histórico de commits
git log --oneline          # Histórico resumido
git diff                   # Diferenças não commitadas
git diff --staged          # Diferenças na staging area
```

### 📁 Trabalhando com Arquivos
```bash
git add <arquivo>          # Adiciona arquivo à staging area
git add .                  # Adiciona todos os arquivos modificados
git commit -m "mensagem"   # Cria um commit com mensagem
git commit -am "mensagem"  # Adiciona e commita arquivos modificados
git rm <arquivo>           # Remove arquivo do repositório
git mv <origem> <destino>  # Move/renomeia arquivo
```

### 🌿 Branches (Ramificações)
```bash
git branch                 # Lista branches locais
git branch <nome>          # Cria nova branch
git checkout <branch>      # Muda para uma branch
git checkout -b <branch>   # Cria e muda para nova branch
git switch <branch>        # Comando moderno para mudar branch
git merge <branch>         # Faz merge de uma branch
git branch -d <branch>     # Deleta branch local
```

### 🌐 Trabalhando com Repositórios Remotos
```bash
git remote add origin <url>    # Adiciona repositório remoto
git remote -v                  # Lista repositórios remotos
git push origin <branch>       # Envia commits para o remoto
git pull                       # Baixa e faz merge das alterações
git fetch                      # Baixa alterações sem fazer merge
git push -u origin main        # Primeira vez enviando branch
```

### 🔄 Desfazendo Alterações
```bash
git restore <arquivo>          # Desfaz alterações não commitadas
git restore --staged <arquivo> # Remove arquivo da staging area
git reset HEAD~1               # Desfaz último commit (mantém alterações)
git reset --hard HEAD~1        # Desfaz último commit (perde alterações)
git revert <commit-hash>       # Cria commit que desfaz outro commit
```

### 🏷️ Tags
```bash
git tag                        # Lista tags
git tag <nome>                 # Cria tag
git tag -a <nome> -m "mensagem" # Cria tag anotada
git push origin <tag>          # Envia tag para remoto
```

---

## ✨ Boas Práticas

### 💬 Mensagens de Commit
- **Use o imperativo**: "Adiciona" ao invés de "Adicionado"
- **Seja descritivo**: Explique **o que** e **por que**, não **como**
- **Primeira linha**: Máximo 50 caracteres, resumo claro
- **Linha em branco** entre título e descrição
- **Use convenções**: feat, fix, docs, style, refactor, test, chore

**Exemplo:**
```
feat: adiciona sistema de autenticação

- Implementa login com email e senha
- Adiciona validação de formulário
- Inclui proteção de rotas privadas
```

### 🌿 Workflow com Branches
1. **main/master**: Branch principal, sempre estável
2. **develop**: Branch de desenvolvimento
3. **feature/**: Branches para novas funcionalidades
4. **hotfix/**: Branches para correções urgentes
5. **release/**: Branches para preparar releases

### 🔄 Fluxo de Trabalho
1. Sempre faça `git pull` antes de começar
2. Crie uma branch para cada feature/fix
3. Faça commits pequenos e frequentes
4. Teste antes de fazer push
5. Use Pull Requests para revisão de código
6. Delete branches após o merge

### 🛡️ Segurança e Organização
- **Nunca commite** senhas, chaves de API ou dados sensíveis
- Use `.gitignore` para excluir arquivos desnecessários
- Mantenha histórico limpo com `git rebase` quando apropriado
- Use `git stash` para salvar trabalho temporário
- Faça backup regular com `git push`

### 📝 Arquivo .gitignore
```gitignore
# Arquivos do sistema
.DS_Store
Thumbs.db

# IDEs
.vscode/
.idea/
*.swp

# Dependências
node_modules/
vendor/

# Arquivos de build
dist/
build/
*.log

# Arquivos sensíveis
.env
config/secrets.yml
```

---

## 📚 Referências e Recursos

### 📖 Documentação Oficial
- [Git Documentation](https://git-scm.com/docs) - Documentação oficial do Git
- [GitHub Docs](https://docs.github.com/) - Documentação do GitHub
- [Git Pro Book](https://git-scm.com/book) - Livro gratuito e completo sobre Git

### 🎓 Tutoriais e Cursos
- [Curso DIO](https://aline-antunes.gitbook.io/formacao-fundamentos-github/) - Curso detalhado
- [Atlassian Git Tutorials](https://www.atlassian.com/git/tutorials) - Tutoriais detalhados
- [Learn Git Branching](https://learngitbranching.js.org/) - Tutorial interativo
- [GitHub Learning Lab](https://github.com/apps/github-learning-lab) - Cursos práticos
- [Git Immersion](https://gitimmersion.com/) - Tutorial passo a passo

### 🛠️ Ferramentas Úteis
- [GitKraken](https://www.gitkraken.com/) - Interface gráfica para Git
- [SourceTree](https://www.sourcetreeapp.com/) - Cliente Git gratuito
- [GitHub Desktop](https://desktop.github.com/) - Cliente oficial do GitHub
- [Git Extensions](http://gitextensions.github.io/) - Interface gráfica open-source

### 📊 Cheat Sheets
- [Git Cheat Sheet (Atlassian)](https://www.atlassian.com/git/tutorials/atlassian-git-cheatsheet)
- [GitHub Git Cheat Sheet](https://education.github.com/git-cheat-sheet-education.pdf)
- [Git Cheat Sheet (GitLab)](https://about.gitlab.com/images/press/git-cheat-sheet.pdf)

### 🌐 Comunidades e Suporte
- [Stack Overflow - Git](https://stackoverflow.com/questions/tagged/git) - Perguntas e respostas
- [Reddit - r/git](https://www.reddit.com/r/git/) - Discussões sobre Git
- [GitHub Community](https://github.community/) - Fórum oficial do GitHub

### 🎯 Práticas Avançadas
- [Conventional Commits](https://www.conventionalcommits.org/) - Padrão para mensagens
- [Semantic Versioning](https://semver.org/) - Versionamento semântico
- [Git Flow](https://nvie.com/posts/a-successful-git-branching-model/) - Modelo de branches
- [GitHub Flow](https://guides.github.com/introduction/flow/) - Workflow simplificado
