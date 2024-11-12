int main () {
    int i;
    char sent [1001];
    gets (sent);
    int time;
    time = 0;
    {
        i = 0;
        while (sent[i] != '\0') {
            if (sent[i] != sent[i + 1] && (sent[i] - sent[i + 1] != 'A' - 'a' && sent[i] - sent[i + 1] != -'A' + 'a')) {
                if (sent[i] >= 'a') {
                    printf ("(%c,%d)", sent[i] - 'a' + 'A', time + 1);
                }
                else {
                    printf ("(%c,%d)", sent[i], time + 1);
                }
                time = 0;
            }
            else {
                time++;
            }
            i = i + 1;
        };
    }
    return 0;
}

