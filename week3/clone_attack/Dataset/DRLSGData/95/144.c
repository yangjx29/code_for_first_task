int main () {
    int BWSENwmD591k;
    char cEswyX [(187 - 87)];
    gets (cEswyX);
    char jku49Rs [100];
    gets (jku49Rs);
    {
        BWSENwmD591k = (163 - 163);
        for (; cEswyX[BWSENwmD591k] != '\0';) {
            if (cEswyX[BWSENwmD591k] >= 'A' && 'Z' >= cEswyX[BWSENwmD591k]) {
                cEswyX[BWSENwmD591k] = cEswyX[BWSENwmD591k] + 32;
            }
            if (jku49Rs[BWSENwmD591k] >= 'A' && 'Z' >= jku49Rs[BWSENwmD591k]) {
                jku49Rs[BWSENwmD591k] = jku49Rs[BWSENwmD591k] + 32;
            }
            BWSENwmD591k = BWSENwmD591k +1;
        }
    }
    for (BWSENwmD591k = (706 - 706); BWSENwmD591k < 100; BWSENwmD591k = BWSENwmD591k +1) {
        if (jku49Rs[BWSENwmD591k] > cEswyX[BWSENwmD591k]) {
            break;
        }
        else if (cEswyX[BWSENwmD591k] > jku49Rs[BWSENwmD591k]) {
            break;
        }
        else if (cEswyX[BWSENwmD591k] == jku49Rs[BWSENwmD591k] && cEswyX[BWSENwmD591k] == '\0') {
            break;
        }
    }
    return 0;
}

