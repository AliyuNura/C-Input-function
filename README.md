# C-Input-function
This is an input function design to accept string input of very high length \ 
in other to avoid the buffer overflow error that occur when \
the limit of scanf() and get functions is excided.The functions \
tends to store some characters that they cannot score,due to this \
most C programs crashes.\
\\**THE FEATURES OF THE DESIGN ARE AS FOLLOWS**\\      \
1) Ability to read white spaces \
2) Ability to stop when it sees newline character '\n' \
3) Ability to discard extra characters \
4) Returns number of characters stored in the array
