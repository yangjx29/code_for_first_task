int main () {
    int i;
    char aj9z2YU [101] = {'\0'}, lbRfhQpDV0gT [101] = {'\0'};
    puts (lbRfhQpDV0gT);
    gets (aj9z2YU);
    for (i = 0; *(aj9z2YU + i + 1) != '\0'; i++)
        *(lbRfhQpDV0gT + i) = *(aj9z2YU + i) + *(aj9z2YU + i + 1);
    *(lbRfhQpDV0gT + i) = *(aj9z2YU + i) + *aj9z2YU;
    return 0;
}

