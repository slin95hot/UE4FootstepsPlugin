What does it do?
it's Play a sound and Spawn a Particle and footprint under the associated bone or socket
specified in the animation using a custom animnotify that's control the size of the footprint and the partical.

How To Setup:

1.install and activate the plugin.

2.go to Project Setting->Physics and add the surface type you want to the list.

![alt text](https://github.com/slin95hot/UE4FootstepsPlugin/blob/main/01.png)

3.create a Physical Material for each surface type you added, and assign the corresponding surface type to each one.
 
4.create a Data Table and pick the "FootstepsData" RowStruct.

5.create a new row for each surface type and name it the same as the corresponding surface type. (importnt and case sensitive)

6.fill the Data Table with the Data you have. (you could leave some effect empty || "Faded Dirty Footprint" is not Requaird and used only with "Dirty Rows")

7.add a new Blueprint of type "FootStepsComponent".

8.Set the Data Table to the Data Table you created.
