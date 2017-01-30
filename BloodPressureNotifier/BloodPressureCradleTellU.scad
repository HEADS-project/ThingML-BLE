
module sensor() {
	translate([-50,0,0]) rotate([90,0,0]) 
		linear_extrude(height = 96, center = true, convexity = 10, twist = 0) 
		polygon( points=[[0,0],[-10,25],[112,70],[123,35],[101,0]] );
}


difference() {

	union() {
		rotate_extrude(convexity = 10, $fn = 100)
translate([58, 0, 0])
circle(r = 20, $fn = 100);
	}

	union() {
		translate([-80,-80,-80]) cube([160,160,70]);
		translate([70,-80,-20]) cube([20,160,50]);
		translate([-110,-80,-20]) rotate([0,30,0]) cube([20,160,60]);
		sensor();
		translate([0,0,-11]) cylinder(r1=60, r2=30, h=22, $fn = 100);
	}
}
translate([67,-20,-4])  rotate([90,0,90]) 	linear_extrude(height = 4.5, center = false, convexity = 10) scale([1.4, 1.4]) text("tellu" , font="Liberation Sans:style=Bold");


translate([-70,0,7])  rotate([90-30,0,-90]) 	{ 
	intersection() {
	linear_extrude(height = 4.5, center = false, convexity = 10) 
		scale([0.18, 0.18]) import (file = "tellulogo.dxf", layer="tellu", $fn=128);
	scale([1,1,0.3]) sphere(r=14.3, $fn=64);
	}
}


%sensor();