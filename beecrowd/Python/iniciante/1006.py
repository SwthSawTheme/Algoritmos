# Média 2

# formula media = ((a . p_a) + (b . p_b) + (c . p_c)) / (p_a + p_b + p_c)
a = float(input())
b = float(input())
c = float(input())

p_a = 2.0
p_b = 3.0
p_c = 5.0

media = ((a * p_a) + (b * p_b) + (c * p_c)) / (p_a + p_b + p_c)
print(f"MEDIA = {media:.1f}")