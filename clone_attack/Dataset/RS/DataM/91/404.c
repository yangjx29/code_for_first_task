int main () {
    char s [(925 - 824)] = {"\0"};
    char s1 [(697 - 596)] = {"\0"};
    char *LaU650RlB7F = s;
    char *pb = s1;
    gets (LaU650RlB7F);
    int Ydj4xQsYnS;
    for (Ydj4xQsYnS = 0;; Ydj4xQsYnS = Ydj4xQsYnS +1) {
        if (*(LaU650RlB7F +Ydj4xQsYnS+2) == '\0')
            break;
        *(pb + Ydj4xQsYnS) = *(LaU650RlB7F +Ydj4xQsYnS) + *(LaU650RlB7F +Ydj4xQsYnS+1);
    }
    printf ("%s", s1);
    *(pb + Ydj4xQsYnS +1) = *(LaU650RlB7F +Ydj4xQsYnS+1) + *LaU650RlB7F;
    return 0;
}

