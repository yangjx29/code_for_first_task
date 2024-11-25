int main () {
    int i;
    int j;
    char KnIyah3g29 [(964 - 464)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    gets (KnIyah3g29);
    for (i = 0; i < strlen (KnIyah3g29); i++)
        if (KnIyah3g29[i] >= '0' && '9' >= KnIyah3g29[i])
            cout << KnIyah3g29[i];
        else if (!(KnIyah3g29[i] >= '0' && KnIyah3g29[i] <= '9') && KnIyah3g29[i + 1] >= '0' && KnIyah3g29[i + 1] <= '9')
            cout << endl;
        else
            ;
    return 0;
}

