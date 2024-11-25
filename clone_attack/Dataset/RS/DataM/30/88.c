int main (int argc, char *d2Gak4 []) {
    int sum;
    int ygcVoZDbK8kM;
    int hb3qGu4AR;
    int m59Y8R3mk7Hu;
    int FZURC8e6I92;
    int uFTiBw3;
    sum = 0;
    ygcVoZDbK8kM = 0;
    scanf ("%d", &hb3qGu4AR);
    for (m59Y8R3mk7Hu = 1; hb3qGu4AR >= m59Y8R3mk7Hu; m59Y8R3mk7Hu++) {
        uFTiBw3 = m59Y8R3mk7Hu;
        for (FZURC8e6I92 = 1; FZURC8e6I92 <= 2; FZURC8e6I92++) {
            if (m59Y8R3mk7Hu % 10 == 7) {
                ygcVoZDbK8kM = 1;
                break;
            }
            else
                m59Y8R3mk7Hu = m59Y8R3mk7Hu / 10;
        }
        m59Y8R3mk7Hu = uFTiBw3;
        if (m59Y8R3mk7Hu % 7 != 0 && ygcVoZDbK8kM != 1) {
            sum = sum + m59Y8R3mk7Hu * m59Y8R3mk7Hu;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        ygcVoZDbK8kM = 0;
    }
    printf ("%d", sum);
    return 0;
}

