def main():
  n = int(input())

  s = input()

  count_a = Counter(s)["a"]

  count_ways = 0
  for k in range(count_a, n + 1):
    count_ways += comb(n, k)

  print(count_ways)

if __name__ == "__main__":
  main()
