def minion_game(string):
    kevin = 0
    stuart = 0
    for i in range(len(string)):
        if (string[i] == 'A' or string[i] == 'E' or string[i] == 'I' or string[i] == 'O' or string[i] == 'U'):
            kevin += len(string) - i
        else:
            stuart += len(string) - i
    if (kevin > stuart):
        print(f'Kevin {kevin}')
    elif (kevin < stuart):
        print(f'Stuart {stuart}')
    else:
        print("Draw")

        
string = input()
minion_game(string)
