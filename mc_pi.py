import math
import random

def sample():
    return (random.random(), random.random())

if __name__ == "__main__":
    NUM_STEPS = 100000
    inside_cnt = 0
    for i in range(NUM_STEPS):
        sp = sample()
        print(sp)
        is_inside = False
        if math.hypot(sp[0], sp[1]) < 1:
            is_inside = True
        if is_inside:
            inside_cnt += 1
    estimated_pi = 4 * inside_cnt / NUM_STEPS
    print(estimated_pi)