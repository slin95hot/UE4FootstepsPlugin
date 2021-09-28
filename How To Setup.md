What does it do?
it's Play a sound and Spawn a Particle and footprint under the associated bone or socket
specified in the animation using a custom animnotify that's control the size of the footprint and the partical.

How To Setup:

1.install and activate the plugin.

2.go to Project Setting->Physics and add the surface type you want to the list.

![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/01.png)

3.create a Physical Material for each surface type you added, and assign the corresponding surface type to each one.

 ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/02.png)
 
4.create a Data Table and pick the "FootstepsData" RowStruct.

 ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/03.png)
 
5.create a new row for each surface type and name it the same as the corresponding surface type. (importnt and case sensitive)

 ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/04.png)
 
6.fill the Data Table with the Data you have. (you could leave some effect empty || "Faded Dirty Footprint" is not Requaird and used only with "Dirty Rows")

7.add a new Blueprint of type "FootStepsComponent".

 ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/05.png)

8.Set the Data Table to the Data Table you created.

 ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/06.png)
 
 9.add the new FootStepsComponent you created to the actor you want. (must have a Skeletal Mesh)
 
  ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/07.png)
  
 10.in the class setting of the actor you added the FootStepsComponent to, add Footsteps Interface to the Interfaces section.

  ![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/img/08.png)
