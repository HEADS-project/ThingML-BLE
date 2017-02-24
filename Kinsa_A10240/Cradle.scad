// Depth of the cradle should be 45mm.
// The right diameter for the thermometer is scale(0.195) import (file = "shape.dxf", layer = "Layer_1");
module cradle() {

difference() {
    union() {
        //translate([-45/2, -20, 0]) cube([45, 40, 50]);
        //translate([-45/2, -35, 0]) cube([45, 40, 10]);

		//rotate([90,0,0]) scale([1,1.5,1]) cylinder(r=25, h=60, $fn=64);

		translate([0,32,50])  rotate([90-30,0,180]) 	{ 
	intersection() {
	linear_extrude(height = 4.5, center = false, convexity = 10) 
		scale([0.18, 0.18]) import (file = "tellulogo.dxf", layer="tellu", $fn=128);
	scale([1,1,0.3]) sphere(r=14.3, $fn=64);
	}
	translate([0,0,-20+1]) cylinder(r=14.3, h=20, $fn=64);
}

		scale([1,0.7,1]) { 
			cylinder(r=40, h=55, $fn=64);
			translate([0,0,55]) {
				rotate_extrude(convexity = 10, $fn = 64) translate([30, 0, 0])
				circle(r = 10, $fn = 64);

			}
		}

       /*
        translate([0,8,0]) rotate([15,0,0]) linear_extrude(convexity = 10, $fn=128) 
            scale(0.30) import (file = "shape.dxf", layer = "Layer_1");
        */
    }
    
    union() {

		//translate([-20,2,-1]) cube([40,1,14]);

		//rotate([90,0,0]) scale([1,1,1]) translate([0,0,1]) cylinder(r=12, h=1, $fn=64);


	


		translate([-50,-80,-50]) cube([100,100,50]);

		translate([0,32,50])  rotate([90-30,0,180]) 	{ 
			translate([0,0,-24]) cylinder(r=14.3-1, h=20, $fn=64);
		}

        translate([0,12,15]) rotate([15,0,0]) linear_extrude(height = 80, convexity = 10, $fn=128) 
            scale(0.195) import (file = "shape.dxf", layer = "Layer_1");

		 translate([0,15,0]) rotate([0,0,0]) linear_extrude(height = 20, convexity = 10, $fn=128) 
            scale(0.10) import (file = "shape.dxf", layer = "Layer_1");
    }
    
}

}


module bottom() {
	difference() {

		union() {
			scale([1,0.7,1]) cylinder(r=40, h=1, $fn=64);
			scale([1,0.7,1]) cylinder(r=38.6, h=4, $fn=64);
		}

		union() {
			translate([0,0,1]) scale([1,0.7,1]) cylinder(r=38.6-1.5, h=5, $fn=64);
			//translate([0,0,-1]) cylinder(r=20, h=6, $fn=64);

		}
	}
	
	difference() {
		union() {
			scale([1,0.7,1]) cylinder(r=35, h=55, $fn=64);	
		}
		union() {
			scale([1,0.7,1]) translate([0,0,-1]) cylinder(r=34, h=60, $fn=64);
			translate([-50, -4, -2])cube([100, 50, 60]);
			
		}
		
	}

	translate([30-4,-5,0]) cube([8,1,45]);
	translate([-30-4,-5,0]) cube([8,1,45]);

}


bottom();


