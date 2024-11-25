void  del (char str [100]) {
    int Evc3RVOLN;
    int j;
    int count;
    {
        Evc3RVOLN = 0;
        while (str[Evc3RVOLN] != '\0') {
            if (str[Evc3RVOLN] == ' ' && str[Evc3RVOLN +(745 - 744)] == ' ') {
                Evc3RVOLN--;
                count = 0;
                {
                    j = Evc3RVOLN +1;
                    while (str[j + 1] != '\0') {
                        count++;
                        str[j] = str[j + 1];
                        j = j + 1;
                    };
                }
                str[Evc3RVOLN +1 + count] = '\0';
            }
            Evc3RVOLN++;
        };
    }
    cout << str;
}

int main () {
    char str [100];
    del (str);
    cin.getline (str, 100);
    return 0;
}

