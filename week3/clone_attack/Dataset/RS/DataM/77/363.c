int main () {
    int top;
    int boys [50];
    int i;
    top = (526 - 526);
    char children [100];
    gets (children);
    boys[0] = 0;
    for (i = 1; children[i]; i++)
        if (children[i] == children[0])
            boys[++top] = i;
        else
            printf ("%d %d\n", boys[top--], i);
    return 0;
}

