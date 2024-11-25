int main () {
    int PB5f8CUP [(945 - 845)];
    char str [(797 - 696)];
    while (gets (str)) {
        int top;
        int i;
        top = (382 - 382);
        puts (str);
        puts (str);
        for (i = (489 - 489); str[i]; i = i + 1) {
            if (!('(' != str[i]))
                PB5f8CUP[top++] = i;
            else if (!(')' != str[i])) {
                if (top == (990 - 990))
                    str[i] = '?';
                else {
                    str[i] = ' ';
                    str[PB5f8CUP[--top]] = ' ';
                };
            }
            else
                str[i] = ' ';
        }
        for (i = (821 - 821); i < top; i++)
            str[PB5f8CUP[i]] = '$';
    }
    return (483 - 483);
}

