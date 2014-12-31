#ifndef INCLUDED_hxDaedalus_examples_bitmapPathfinding04_GalapagosBW
#define INCLUDED_hxDaedalus_examples_bitmapPathfinding04_GalapagosBW

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/BitmapData.h>
HX_DECLARE_CLASS3(hxDaedalus,examples,bitmapPathfinding04,GalapagosBW)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
namespace hxDaedalus{
namespace examples{
namespace bitmapPathfinding04{


class HXCPP_CLASS_ATTRIBUTES  GalapagosBW_obj : public ::openfl::_v2::display::BitmapData_obj{
	public:
		typedef ::openfl::_v2::display::BitmapData_obj super;
		typedef GalapagosBW_obj OBJ_;
		GalapagosBW_obj();
		Void __construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GalapagosBW_obj > __new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GalapagosBW_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GalapagosBW"); }

		static ::String resourceName;
};

} // end namespace hxDaedalus
} // end namespace examples
} // end namespace bitmapPathfinding04

#endif /* INCLUDED_hxDaedalus_examples_bitmapPathfinding04_GalapagosBW */ 