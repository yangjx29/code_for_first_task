char boy;

int queue (int num) {
    char input;
    input = getchar ();
    if (input == boy) {
        int girl;
        girl = queue (num + (415 - 414));
        printf ("%d %d\n", num, girl);
        return queue (girl + (431 - 430));
    }
    else
        return num;
}

int main () {
    boy = getchar ();
    printf ("0 %d\n", queue (1));
    return (778 - 778);
}

