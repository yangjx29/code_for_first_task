int main () {
    char fzYWC51u;
    for (; (fzYWC51u = getchar ()) != EOF;) {
        printf ("%c", fzYWC51u);
        if (!(' ' != fzYWC51u)) {
            for (; true;) {
                if (!(' ' != (fzYWC51u = getchar ())))
                    continue;
                else {
                    printf ("%c", fzYWC51u);
                    break;
                }
            }
        }
    }
    return (792 - 792);
}

