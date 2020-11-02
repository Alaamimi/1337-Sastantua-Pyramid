# Sastantua
Sastantua was one og the most emotionally charged projects of the 1337 Piscine. it has one super-long function full of for loops, and it should be
converted to While loops . Thats what the 42norme is all about.
I ended up writing it in two ways, a recursive way and an iterative one.

# Ressources:
https://www.youtube.com/watch?v=VV_0NbJtYPU&list=PLaykjQfTBR07rH7GokObT1J13q9G8Q_Oe&ab_channel=FabienB

# Details
* Tier rows
  * nth + 2
* Tier growth:
  * For even-number tiers, the growth is 1 + nth / 2
  * For odd-number tiers, the growth is the same as on the prev tier
* Door size
  * If the door is on an odd-number tier, the door is the size of the nth
  * On an even-numbered tier, the door is the same as on the prev tier
  
| Tier | Tier rows | Door size | Tier growth |
| ---- | --------- | --------- | ----------- |
| 1    | 3         | 1         | None
| 2    | 4         | 1         | 2
| 3    | 5         | 3         | 2
| 4    | 6         | 3         | 3
| 5    | 7         | 5         | 3
| 6    | 8         | 5         | 4
| 7    | 9         | 7         | 4
| 8    | 10        | 7         | 5
| 9    | 11        | 9         | 5
| 10   | 12        | 9         | 6

```
☁ vlad$ [master] ⚡  ./sastantua 0
☁ vlad$ [master] ⚡  ./sastantua 1
  /*\
 /***\
/**|**\
☁ vlad$ [master] ⚡  ./sastantua 2
        /*\
       /***\
      /*****\
   /***********\
  /*************\
 /***************\
/********|********\
☁ vlad$ [master] ⚡  ./sastantua 3
               /*\
              /***\
             /*****\
          /***********\
         /*************\
        /***************\
       /*****************\
    /***********************\
   /*************************\
  /************|||************\
 /*************|||*************\
/**************|||**************\
☁ vlad$ [master] ⚡  ./sastantua 4
                        /*\
                       /***\
                      /*****\
                   /***********\
                  /*************\
                 /***************\
                /*****************\
             /***********************\
            /*************************\
           /***************************\
          /*****************************\
         /*******************************\
     /***************************************\
    /*****************************************\
   /*******************************************\
  /*********************|||*********************\
 /**********************|||**********************\
/***********************|||***********************\
☁ vlad$ [master] ⚡  ./sastantua 5
                                  /*\
                                 /***\
                                /*****\
                             /***********\
                            /*************\
                           /***************\
                          /*****************\
                       /***********************\
                      /*************************\
                     /***************************\
                    /*****************************\
                   /*******************************\
               /***************************************\
              /*****************************************\
             /*******************************************\
            /*********************************************\
           /***********************************************\
          /*************************************************\
      /*********************************************************\
     /***********************************************************\
    /****************************|||||****************************\
   /*****************************|||||*****************************\
  /******************************|||$|******************************\
 /*******************************|||||*******************************\
/********************************|||||********************************\
☁ vlad$ [master] ⚡  ./sastantua 6
                                              /*\
                                             /***\
                                            /*****\
                                         /***********\
                                        /*************\
                                       /***************\
                                      /*****************\
                                   /***********************\
                                  /*************************\
                                 /***************************\
                                /*****************************\
                               /*******************************\
                           /***************************************\
                          /*****************************************\
                         /*******************************************\
                        /*********************************************\
                       /***********************************************\
                      /*************************************************\
                  /*********************************************************\
                 /***********************************************************\
                /*************************************************************\
               /***************************************************************\
              /*****************************************************************\
             /*******************************************************************\
            /*********************************************************************\
       /*******************************************************************************\
      /*********************************************************************************\
     /***********************************************************************************\
    /****************************************|||||****************************************\
   /*****************************************|||||*****************************************\
  /******************************************|||$|******************************************\
 /*******************************************|||||*******************************************\
/********************************************|||||********************************************\
☁ vlad$ [master] ⚡  ./sastantua 7
                                                           /*\
                                                          /***\
                                                         /*****\
                                                      /***********\
                                                     /*************\
                                                    /***************\
                                                   /*****************\
                                                /***********************\
                                               /*************************\
                                              /***************************\
                                             /*****************************\
                                            /*******************************\
                                        /***************************************\
                                       /*****************************************\
                                      /*******************************************\
                                     /*********************************************\
                                    /***********************************************\
                                   /*************************************************\
                               /*********************************************************\
                              /***********************************************************\
                             /*************************************************************\
                            /***************************************************************\
                           /*****************************************************************\
                          /*******************************************************************\
                         /*********************************************************************\
                    /*******************************************************************************\
                   /*********************************************************************************\
                  /***********************************************************************************\
                 /*************************************************************************************\
                /***************************************************************************************\
               /*****************************************************************************************\
              /*******************************************************************************************\
             /*********************************************************************************************\
        /*******************************************************************************************************\
       /*********************************************************************************************************\
      /**************************************************|||||||**************************************************\
     /***************************************************|||||||***************************************************\
    /****************************************************|||||||****************************************************\
   /*****************************************************|||||$|*****************************************************\
  /******************************************************|||||||******************************************************\
 /*******************************************************|||||||*******************************************************\
/********************************************************|||||||********************************************************\
☁ vlad$ [master] ⚡  ./sastantua 8
                                                                          /*\
                                                                         /***\
                                                                        /*****\
                                                                     /***********\
                                                                    /*************\
                                                                   /***************\
                                                                  /*****************\
                                                               /***********************\
                                                              /*************************\
                                                             /***************************\
                                                            /*****************************\
                                                           /*******************************\
                                                       /***************************************\
                                                      /*****************************************\
                                                     /*******************************************\
                                                    /*********************************************\
                                                   /***********************************************\
                                                  /*************************************************\
                                              /*********************************************************\
                                             /***********************************************************\
                                            /*************************************************************\
                                           /***************************************************************\
                                          /*****************************************************************\
                                         /*******************************************************************\
                                        /*********************************************************************\
                                   /*******************************************************************************\
                                  /*********************************************************************************\
                                 /***********************************************************************************\
                                /*************************************************************************************\
                               /***************************************************************************************\
                              /*****************************************************************************************\
                             /*******************************************************************************************\
                            /*********************************************************************************************\
                       /*******************************************************************************************************\
                      /*********************************************************************************************************\
                     /***********************************************************************************************************\
                    /*************************************************************************************************************\
                   /***************************************************************************************************************\
                  /*****************************************************************************************************************\
                 /*******************************************************************************************************************\
                /*********************************************************************************************************************\
               /***********************************************************************************************************************\
         /***********************************************************************************************************************************\
        /*************************************************************************************************************************************\
       /***************************************************************************************************************************************\
      /*****************************************************************|||||||*****************************************************************\
     /******************************************************************|||||||******************************************************************\
    /*******************************************************************|||||||*******************************************************************\
   /********************************************************************|||||$|********************************************************************\
  /*********************************************************************|||||||*********************************************************************\
 /**********************************************************************|||||||**********************************************************************\
/***********************************************************************|||||||***********************************************************************\
☁ vlad$ [master] ⚡  ./sastantua 9
                                                                                          /*\
                                                                                         /***\
                                                                                        /*****\
                                                                                     /***********\
                                                                                    /*************\
                                                                                   /***************\
                                                                                  /*****************\
                                                                               /***********************\
                                                                              /*************************\
                                                                             /***************************\
                                                                            /*****************************\
                                                                           /*******************************\
                                                                       /***************************************\
                                                                      /*****************************************\
                                                                     /*******************************************\
                                                                    /*********************************************\
                                                                   /***********************************************\
                                                                  /*************************************************\
                                                              /*********************************************************\
                                                             /***********************************************************\
                                                            /*************************************************************\
                                                           /***************************************************************\
                                                          /*****************************************************************\
                                                         /*******************************************************************\
                                                        /*********************************************************************\
                                                   /*******************************************************************************\
                                                  /*********************************************************************************\
                                                 /***********************************************************************************\
                                                /*************************************************************************************\
                                               /***************************************************************************************\
                                              /*****************************************************************************************\
                                             /*******************************************************************************************\
                                            /*********************************************************************************************\
                                       /*******************************************************************************************************\
                                      /*********************************************************************************************************\
                                     /***********************************************************************************************************\
                                    /*************************************************************************************************************\
                                   /***************************************************************************************************************\
                                  /*****************************************************************************************************************\
                                 /*******************************************************************************************************************\
                                /*********************************************************************************************************************\
                               /***********************************************************************************************************************\
                         /***********************************************************************************************************************************\
                        /*************************************************************************************************************************************\
                       /***************************************************************************************************************************************\
                      /*****************************************************************************************************************************************\
                     /*******************************************************************************************************************************************\
                    /*********************************************************************************************************************************************\
                   /***********************************************************************************************************************************************\
                  /*************************************************************************************************************************************************\
                 /***************************************************************************************************************************************************\
                /*****************************************************************************************************************************************************\
          /*****************************************************************************************************************************************************************\
         /*******************************************************************************************************************************************************************\
        /******************************************************************************|||||||||******************************************************************************\
       /*******************************************************************************|||||||||*******************************************************************************\
      /********************************************************************************|||||||||********************************************************************************\
     /*********************************************************************************|||||||||*********************************************************************************\
    /**********************************************************************************|||||||$|**********************************************************************************\
   /***********************************************************************************|||||||||***********************************************************************************\
  /************************************************************************************|||||||||************************************************************************************\
 /*************************************************************************************|||||||||*************************************************************************************\
/**************************************************************************************|||||||||**************************************************************************************\
☁ vlad$ ⚡  ./sastantua 10
                                                                                                            /*\
                                                                                                           /***\
                                                                                                          /*****\
                                                                                                       /***********\
                                                                                                      /*************\
                                                                                                     /***************\
                                                                                                    /*****************\
                                                                                                 /***********************\
                                                                                                /*************************\
                                                                                               /***************************\
                                                                                              /*****************************\
                                                                                             /*******************************\
                                                                                         /***************************************\
                                                                                        /*****************************************\
                                                                                       /*******************************************\
                                                                                      /*********************************************\
                                                                                     /***********************************************\
                                                                                    /*************************************************\
                                                                                /*********************************************************\
                                                                               /***********************************************************\
                                                                              /*************************************************************\
                                                                             /***************************************************************\
                                                                            /*****************************************************************\
                                                                           /*******************************************************************\
                                                                          /*********************************************************************\
                                                                     /*******************************************************************************\
                                                                    /*********************************************************************************\
                                                                   /***********************************************************************************\
                                                                  /*************************************************************************************\
                                                                 /***************************************************************************************\
                                                                /*****************************************************************************************\
                                                               /*******************************************************************************************\
                                                              /*********************************************************************************************\
                                                         /*******************************************************************************************************\
                                                        /*********************************************************************************************************\
                                                       /***********************************************************************************************************\
                                                      /*************************************************************************************************************\
                                                     /***************************************************************************************************************\
                                                    /*****************************************************************************************************************\
                                                   /*******************************************************************************************************************\
                                                  /*********************************************************************************************************************\
                                                 /***********************************************************************************************************************\
                                           /***********************************************************************************************************************************\
                                          /*************************************************************************************************************************************\
                                         /***************************************************************************************************************************************\
                                        /*****************************************************************************************************************************************\
                                       /*******************************************************************************************************************************************\
                                      /*********************************************************************************************************************************************\
                                     /***********************************************************************************************************************************************\
                                    /*************************************************************************************************************************************************\
                                   /***************************************************************************************************************************************************\
                                  /*****************************************************************************************************************************************************\
                            /*****************************************************************************************************************************************************************\
                           /*******************************************************************************************************************************************************************\
                          /*********************************************************************************************************************************************************************\
                         /***********************************************************************************************************************************************************************\
                        /*************************************************************************************************************************************************************************\
                       /***************************************************************************************************************************************************************************\
                      /*****************************************************************************************************************************************************************************\
                     /*******************************************************************************************************************************************************************************\
                    /*********************************************************************************************************************************************************************************\
                   /***********************************************************************************************************************************************************************************\
                  /*************************************************************************************************************************************************************************************\
           /***************************************************************************************************************************************************************************************************\
          /*****************************************************************************************************************************************************************************************************\
         /*******************************************************************************************************************************************************************************************************\
        /************************************************************************************************|||||||||************************************************************************************************\
       /*************************************************************************************************|||||||||*************************************************************************************************\
      /**************************************************************************************************|||||||||**************************************************************************************************\
     /***************************************************************************************************|||||||||***************************************************************************************************\
    /****************************************************************************************************|||||||$|****************************************************************************************************\
   /*****************************************************************************************************|||||||||*****************************************************************************************************\
  /******************************************************************************************************|||||||||******************************************************************************************************\
 /*******************************************************************************************************|||||||||*******************************************************************************************************\
/********************************************************************************************************|||||||||********************************************************************************************************\
```
