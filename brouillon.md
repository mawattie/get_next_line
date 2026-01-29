
- doit marcher comme prevu aussi bien sur lecture de file que standard imput

- undefined behaviors si file associé a fd est modifié apres le last call while read() n'a pas atteint la fin du file

- undefined behavior encore quand on lit un binary file

You will compile your code as follows (a buffer size of 42 is used as an example):
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c

Does your function still work if the BUFFER_SIZE value is 9999? If
it is 1? 10000000? Do you know why?