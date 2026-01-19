- apl fonction gnl a repetition pour lire le texte pointé par le fd une ligne a la fois
- la fonction doit return la ligne lue 
- si rien a lire ou error doit return NULL
- doit marcher comme prevu aussi bien sur lecture de file que standard imput
- returned line doit inclureterminating \n sauf quand c'est la fin du file et que le file se finit pas avec un \n 
- helper functions vont dans le utils file

- undefined behaviors si file associé a fd est modifié apres le last call while read() n'a pas atteint la fin du file
- undefined behavior encore quand on lit un binary file

Because you will have to read files in get_next_line(), add this option to your
compiler call: -D BUFFER_SIZE=n
It will define the buffer size for read().
The buffer size value will be adjusted by your peer evaluators and the Moulinette
to test your code.
We must be able to compile this project with and without the -D
BUFFER_SIZE flag in addition to the usual flags. You may choose any
default value you prefer.

You will compile your code as follows (a buffer size of 42 is used as an example):
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 <files>.c


Does your function still work if the BUFFER_SIZE value is 9999? If
it is 1? 10000000? Do you know why?

Try to read as little as possible each time get_next_line() is
called. If you encounter a new line, you have to return the current
line.
Don’t read the whole file and then process each line.

C'EST QUOI UNE STATIC VARIABLE 