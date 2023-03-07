# definindo os dados
dados = {'SP': 67836.43, 'RJ': 36678.66, 'MG': 29229.88, 'ES': 27165.48, 'Outros': 19849.53}

# Calculando a soma apenas dos numeros
total = sum(dados.values())

# Percorrendo a lista, calculando o percentual e exibindo junto do Estado
for estado, valor in dados.items():
    perc = (valor / total) * 100
    print(f'{estado}: {perc:.2f}%')


