//
// Created by Levin on 2024/10/22.
//
//百马百担问题：100匹马，驮100担货，大马3担，中马2担，两匹小马驮一担，问共有大、中、小马各多少？

#include <stdio.h>

int main() {
    int d, z, x;    //大中小马匹数
    for (int d = 0; d <= 100; ++d) {
        for (int z = 0; z <= 100 - d; ++z) {
            x = 100 - d - z;
            if (x % 2 == 0 && 3 * d + 2 * z + x / 2 == 100)
                printf("大马：%d批\t中马：%d批\t小马：%d批\n", d, z, x);
        }
    }
    return 0;
}

/*
int main()
{
    for (int d = 0; d < 100; ++d)
    {
        for (int z = 0; z < 100; ++z)
        {
            if(d + z + (100 - d - z) == 100 && (100 - d - z) % 2 == 0 && 3 * d + 2 * z + (100 - d - z) / 2 == 100)
            {
                printf("%d %d %d\n", d, z, (100 - d - z));
//                return 0;
            }
            */
/*for (int x = 0; x < 100; ++x)
            {
                if(d + z + x == 100 && x % 2 == 0 && 3 * d + 2 * z + x / 2 == 100)
                {
                    printf("%d %d %d", d, z, x);
                    return 0;
                }
            }*//*

        }
    }
    return 0;
}*/
