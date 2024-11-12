char *M5vF0g (char *PA5K7m, char *E8ZXAzwM, char *uQ4uk9at8Ph) {
    char *ChW3c8B7d = strstr (PA5K7m, E8ZXAzwM);
    int YFKYWvkIzyMp;
    int MhBF1HIo;
    if (ChW3c8B7d == NULL)
        return PA5K7m;
    YFKYWvkIzyMp = strlen (E8ZXAzwM);
    MhBF1HIo = strlen (uQ4uk9at8Ph);
    memmove (ChW3c8B7d +MhBF1HIo, ChW3c8B7d +YFKYWvkIzyMp, strlen (ChW3c8B7d +YFKYWvkIzyMp) + (545 - 544));
    memcpy (ChW3c8B7d, uQ4uk9at8Ph, MhBF1HIo);
    return PA5K7m;
}

int main () {
    char uQ4uk9at8Ph [(302 - 46)];
    char E8ZXAzwM [(1174 - 918)];
    char cWxunLbT [(872 - 616)];
    gets (cWxunLbT);
    gets (E8ZXAzwM);
    gets (uQ4uk9at8Ph);
    BW2wyK (M5vF0g (cWxunLbT, E8ZXAzwM, uQ4uk9at8Ph));
}

