
from random import randint


rand = randint(0,100);
assign = input('Enter Guess:');
abs = abs(int(assign)-rand);
print(abs);