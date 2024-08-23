import time
iterations = 10000000
start = time.process_time()
for i in range(iterations):
  pass
end = time.process_time()
duration = end - start
print(f"Execution time: {duration:.6f} seconds")