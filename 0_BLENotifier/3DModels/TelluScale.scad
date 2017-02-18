module mask() {

difference() {
	cylinder(r=25, h=1, $fn=128);

	translate([0,0,-1]) linear_extrude(height = 4.5, center = false, convexity = 10) 
		scale([0.4, 0.4]) rotate([0,180]) import (file = "tellulogo.dxf", layer="tellu2", $fn=128);
}

difference() {
	cylinder(r=25, h=5, $fn=128);
	translate([0,0,-1]) cylinder(r=24, h=10, $fn=128);
}
/*
difference() {

	union() {
		translate([-18+1, -2, 0]) rotate([0,30,0]) translate([-2, 0, 0]) cube([2,4,12]);
		translate([18-1, -2, 0]) rotate([0,-30,0]) cube([2,4,12]);
		translate([-25.5/2, -2, 10])  cube([25.5,4,1.5]);
	}

	translate([-30,-30,11.5]) cube([60,60,10]);
}
*/

}

module diffuser() {

	difference() {
		union() {
			cylinder(r=23.5, h=8, $fn=128);
			//translate([0,0,0]) linear_extrude(height = 6, center = false, convexity = 10) 
			//	scale([0.39, 0.39]) import (file = "tellulogo.dxf", layer="tellu2", $fn=128);
		}
		union() {
			translate([-35/2,-17/2-4,0])cube([45,10,2]); 

			translate([-35/2,17/2-4,0]) cube([45,10,2]);
		}
	}

}

diffuser();
//mask();