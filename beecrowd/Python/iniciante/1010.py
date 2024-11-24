# Cálculo Simples

# Código, número e valor das peças 1
id_p1,n_p1, v_p1 = input().split()
id_p1 = int(id_p1)
n_p1 = int(n_p1)
v_p1 = float(v_p1)

# Código, número e valor das peças 2
id_p2, n_p2, v_p2 = input().split()
id_p2 = int(id_p2)
n_p2 = int(n_p2)
v_p2 = float(v_p2)

valor_total = (n_p1 * v_p1) + (n_p2 * v_p2)

print(f"VALOR A PAGAR: R$ {valor_total:.2f}")