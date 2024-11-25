int main () {
    int index;
    index = 0;
    int count;
    count = 0;
    int beHv1yNkJDS;
    beHv1yNkJDS = 0;
    char ZSLAZFGc56o [1000];
    gets (ZSLAZFGc56o);
    char first_letter = toupper (ZSLAZFGc56o[0]);
    while (ZSLAZFGc56o[beHv1yNkJDS])
        beHv1yNkJDS++;
    for (index = 0; beHv1yNkJDS >= index;) {
        if (toupper (ZSLAZFGc56o[index]) == first_letter) {
            index++;
            count++;
        }
        else {
            printf ("(%c,%d)", first_letter, count);
            first_letter = toupper (ZSLAZFGc56o[index]);
            count = 0;
        };
    }
    return 0;
}

