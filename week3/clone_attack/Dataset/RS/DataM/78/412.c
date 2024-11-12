int main () {
    int weight [(793 - 789)];
    int i;
    int j;
    int qplDrfXP1NSy;
    char O8xPIBj3e [(960 - 956)] [(157 - 155)] = {"z", "q", "s", "l"};
    char V7hA1dY [(274 - 272)];
    for (weight[(78 - 78)] = (479 - 478); (302 - 297) > weight[(485 - 485)]; weight[(939 - 939)]++) {
        for (weight[(503 - 502)] = (759 - 758); weight[(260 - 259)] < 5; weight[(135 - 134)]++) {
            for (weight[(922 - 920)] = (701 - 700); weight[(323 - 321)] < 5; weight[(241 - 239)]++) {
                {
                    weight[(420 - 417)] = 354 - 353;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (weight[(819 - 816)] < 5) {
                        if (!(weight[(340 - 338)] + weight[3] != weight[(595 - 595)] + weight[(508 - 507)]) && weight[2] + weight[(208 - 207)] < weight[(405 - 405)] + weight[3] && weight[1] > weight[(623 - 623)] + weight[2])
                            break;
                    };
                }
                if (weight[(409 - 409)] + weight[1] == weight[2] + weight[3] && weight[(124 - 124)] + weight[3] > weight[2] + weight[1] && weight[(337 - 337)] + weight[2] < weight[1])
                    break;
            }
            if (!(weight[2] + weight[3] != weight[0] + weight[1]) && weight[2] + weight[1] < weight[0] + weight[3] && weight[1] > weight[0] + weight[2])
                break;
        }
        if (weight[0] + weight[1] == weight[2] + weight[3] && weight[0] + weight[3] > weight[2] + weight[1] && weight[0] + weight[2] < weight[1])
            break;
    }
    {
        i = 0;
        while (i < 4) {
            {
                j = 1;
                while (j < 4 - i) {
                    if (weight[j - 1] < weight[j]) {
                        qplDrfXP1NSy = weight[j - 1];
                        weight[j - 1] = weight[j];
                        weight[j] = qplDrfXP1NSy;
                        strcpy (V7hA1dY, O8xPIBj3e[j - 1]);
                        strcpy (O8xPIBj3e[j - 1], O8xPIBj3e[j]);
                        strcpy (O8xPIBj3e[j], V7hA1dY);
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            i++;
        };
    }
    for (i = 0; i < 4; i = i + 1)
        cout << O8xPIBj3e[i] << " " << (179 - 169) * weight[i] << endl;
    return 0;
}

