#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> // check if input is int (isdigit)
//#include <conio.h> // colorify stuff

// Prototype
// void decoration(int color);

int menu()
{
    // Variables
    // 
    int choice;
    
  // decoration(RED);

    while (choice < 1 || choice > 18)
    {
    // Menue 
    printf("=== Mounter: mount devices ===\n");
    printf("Choose from options below: \n");
    printf("1: Display Partitions.\n");
    printf("2: Mount NTFSFree Partition.\n");
    printf("3:UMount NTFSFree Partition.\n");
    printf("4: Mount Parrot Partition.\n");
    printf("5 :Umount Parrot Partition.\n");
    printf("6: Mount All Prtitions.\n");
    printf("7: Exit from Monter App.\n");
    printf("8: Shutdown System.\n");
    printf("9: Mount Parrot Partition.\n");
    printf("10:Umount Parrot Partition.\n");
    printf("11: Mount SSD  | NTFS2 Partition.\n");
    printf("12: UMount SSD | NTFS2 Partition.\n");
    printf("13: Mount Windows10  Partition.\n");
    printf("14: UMount Windows1 Partition.\n");
    printf("15: Mount  SDCard Partition.\n");
    printf("16: UMount SDCardG Partition.\n");
    printf("17: Mount  Flash Partition.\n");
    printf("18: UMount Flash Partition.\n");
    printf("Your Choice?\n");
    
    //putchar("%d",choice );
    
    scanf("%i",&choice);
    if(isdigit(choice) == 0)
        {
            break;
        } 
      
    } 

    printf("%i", choice);
    
  return choice;
}

int main(int args, char *argv[])
{
    
     // Switch
    switch(menu())
    {
        char command[50];
        case 1:
            printf("========================\n");
            printf("Mounted Partitions are: \n");
            printf("========================\n");
            
            //Display os nvm SDCard
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);

            // Display os sda 
            strcpy(command, "lsblk  -l | grep sda");
            system(command);

            // Display os sdb 
            strcpy(command, "lsblk  -l | grep  sdb");
            system(command);
            break;

        case 2:
            //os library command
            //Test return 
            strcpy(command, "sudo mount /dev/nvme0n1p8 /NTFSFree ");
            system(command);

	        printf("========================\n");
            printf("NTFSFree mounted successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;

        case 3:
            // Mount NTFSFree
            strcpy(command, "sudo umount /dev/nvme0n1p8 /NTFSFree ");
            system(command);
            printf("========================\n");
            printf("UMounted NTFSFree successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;

        case 4:
            //Mount Parrot
            strcpy(command, "sudo mount /dev/nvme0n1p7 /Parrot ");
            system(command);
            printf("========================\n");
            printf("Parrot Mounted Successfully!: \n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            printf("========================\n");
            break;

         case 5:
              // uMount Parrot
             strcpy(command, "sudo umount /dev/nvme0n1p7 /Parrot ");
             system(command);
             printf("========================\n");
             printf("UMounted Parrot successfully!: \n");
             printf("========================\n");
             strcpy(command, "lsblk  -l | grep  'nvm' ");
             system(command);
             break;
         
        case 6:
              // Mount All Partitions
             strcpy(command, "sudo mount /dev/nvme0n1p8 /NTFSFree ");
             system(command);
            
             strcpy(command, "sudo mount /dev/nvme0n1p7 /Parrot ");
             system(command);
            
            
	         printf("========================\n");
             printf("All partions Mounted successfully!: \n");
             printf("========================\n");
             strcpy(command, "lsblk  -l | grep  '/nvm' ");
             system(command);
             break;

        case 7:
            printf("Exit\n");
            break;

        case 8:
            printf("========================\n");
            printf("System will be Shutdown After 1 M!"); 
            printf("========================\n");
            strcpy(command, "shutdown now \n");
            system(command);
            break;
		
        case 9:
             // Mount Parrot
            strcpy(command, "sudo mount /dev/nvme0n1p7 /Parrot ");
            system(command);
            printf("========================\n");
            printf("Mounted Parrot successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;


	    case 10:
             // uMount Parrot
            strcpy(command, "sudo umount /dev/nvme0n1p7 /Parrot ");
            system(command);
            printf("========================\n");
            printf("UMounted Parrot successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;

	
	    case 11:
             // Mount NTFS2 /SSD
            strcpy(command, "sudo mount /dev/nvme0n1p8 /NTFS2 ");
            system(command);
            printf("========================\n");
            printf("NTFS2 mounted successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;

	    case 12:
             // uMount NTFS2 /SSD
            strcpy(command, "sudo umount /dev/nvme0n1p8 /NTFS2 ");
            system(command);
            printf("========================\n");
            printf("NTFS2 umounted successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;


	    case 13:
             // Mount Windows 10
            strcpy(command, "sudo mount /dev/nvme0n1p3 /Win10 ");
            system(command);
            printf("========================\n");
            printf("Mounted Windows10 successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;

    	case 14:
             // UMount Windows10
            strcpy(command, "sudo umount /dev/nvme0n1p3 /Parrot ");
            system(command);
            printf("========================\n");
            printf("UMounted Windows10 successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);
            break;

        case 15:
             // Mount SDCard
            strcpy(command, "sudo mount -o rw,umask=000 /dev/sda1 /SDCard ");
            system(command);
            printf("========================\n");
            printf(" SD_Card64 mounted successfully!: \n");
            printf("========================\n");
            
            //Display os nvm SDCard
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);

            // Display os sda 
            strcpy(command, "lsblk  -l | grep sda");
            system(command);

            // Display os sdb 
            strcpy(command, "lsblk  -l | grep  sdb");
            system(command);


            break;

        case 16:
             // UMount SDCard
            strcpy(command, "sudo umount /dev/sda1 /SDCard ");
            system(command);
            strcpy(command, "lsblk  -l | grep  'sda' ");

            printf("========================\n");
            printf("SD_Card64 mounted successfully!: \n");
            printf("========================\n");
            
            //Display os nvm SDCard
            strcpy(command, "lsblk  -l | grep  'nvm' ");
            system(command);

            // Display os sda 
            strcpy(command, "lsblk  -l | grep sda");
            system(command);

            // Display os sdb 
            strcpy(command, "lsblk  -l | grep  sdb");
            system(command);


          

            break;


        case 17:
             // Mount Flash
            strcpy(command, "sudo mount /dev/sdb1 /Flash_Card ");
            system(command);
            printf("========================\n");
            printf(" Flash mounted successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | egrep 'sda | sdb' ");
            system(command);
            break;

        case 18:
             // UMount Flash
            strcpy(command, "sudo umount /dev/sdb1 /Flash_Card ");
            system(command);
            printf("========================\n");
            printf("Flash mounted successfully!: \n");
            printf("========================\n");
            strcpy(command, "lsblk  -l | grep  'sdb' ");
            system(command);
            break;

      default:
            printf("========================\n");
            printf("Invalid choice, Enter a number!: \n");
            printf("========================\n");
            
    }
   

    return 0;
}



